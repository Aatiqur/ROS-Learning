import rclpy
from rclpy.action import ActionServer
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from custom_interfaces.action import FibonacciAction


class FibonacciActionServer(Node):
	def __init__(self):
		super().__init__('fibonacci_action_server')
		self._action_server = ActionServer(
			self,
			FibonacciAction,
			'fibonacci_action',
			self.execute_callback
		)

	def execute_callback(self, goal_handle):
		self.get_logger().info(f'Received goal: order={goal_handle.request.order}')

		feedback_msg = FibonacciAction.Feedback()
		feedback_msg.partial_sequence = [0, 1]

		for _ in range(2, goal_handle.request.order):
			feedback_msg.partial_sequence.append(
				feedback_msg.partial_sequence[-1] + feedback_msg.partial_sequence[-2]
			)
			goal_handle.publish_feedback(feedback_msg)
			self.get_logger().info(f'Publishing feedback: {feedback_msg.partial_sequence}')

		goal_handle.succeed()

		result = FibonacciAction.Result()
		result.sequence = feedback_msg.partial_sequence[: goal_handle.request.order]
		return result


def main():
	rclpy.init()
	node = FibonacciActionServer()
	try:
		rclpy.spin(node)
	except (KeyboardInterrupt, ExternalShutdownException):
		pass
	finally:
		node.destroy_node()
		rclpy.shutdown()


if __name__ == '__main__':
	main()

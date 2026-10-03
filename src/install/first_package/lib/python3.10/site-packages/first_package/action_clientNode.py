import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from custom_interfaces.action import FibonacciAction


class FibonacciActionClient(Node):
	def __init__(self):
		super().__init__('fibonacci_action_client')
		self._action_client = ActionClient(self, FibonacciAction, 'fibonacci_action')

	def send_goal(self, order: int = 10):
		goal_msg = FibonacciAction.Goal()
		goal_msg.order = order

		self._action_client.wait_for_server()
		return self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

	def feedback_callback(self, feedback_msg):
		feedback = feedback_msg.feedback
		self.get_logger().info(f'Feedback: {feedback.partial_sequence}')


def main():
	rclpy.init()
	node = FibonacciActionClient()
	try:
		send_goal_future = node.send_goal(10)
		rclpy.spin_until_future_complete(node, send_goal_future)

		goal_handle = send_goal_future.result()
		if goal_handle is None or not goal_handle.accepted:
			node.get_logger().error('Goal rejected')
			return

		node.get_logger().info('Goal accepted')
		result_future = goal_handle.get_result_async()
		rclpy.spin_until_future_complete(node, result_future)

		result = result_future.result().result
		node.get_logger().info(f'Final sequence: {result.sequence}')
	finally:
		node.destroy_node()
		rclpy.shutdown()


if __name__ == '__main__':
	main()

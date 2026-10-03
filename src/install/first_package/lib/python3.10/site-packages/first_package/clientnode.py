import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from custom_interfaces.srv import CstmSrv


class CstmSrvClient(Node):
    def __init__(self):
        super().__init__('cstm_srv_client')
        self.client = self.create_client(CstmSrv, 'cstm_srv')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for cstm_srv service...')

    def send_request(self):
        request = CstmSrv.Request()
        request.a = 5
        request.b = 10
       
        return self.client.call_async(request)


def main():
    rclpy.init()
    cient = CstmSrvClient()
    try:
        future = cient.send_request()
        rclpy.spin_until_future_complete(cient, future)

        if future.result() is not None:
            response = future.result()
            cient.get_logger().info(f'Service response: rslt={response.rslt}')
        else:
            cient.get_logger().error(f'Service call failed: {future.exception()}')
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        cient.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
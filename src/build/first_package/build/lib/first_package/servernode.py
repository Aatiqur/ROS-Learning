import rclpy
from rclpy.node import Node
from custom_interfaces.srv import CstmSrv
from rclpy.executors import ExternalShutdownException

class CstmSrvNode(Node):
    def __init__(self):
        super().__init__('cstm_srv_server')
        self.srv = self.create_service(CstmSrv, 'cstm_srv', self.handle_cstm_srv)

    def handle_cstm_srv(self, request, response):
        response.rslt = request.a + request.b
        self.get_logger().info(f'Service request received: a={request.a}, b={request.b}, rslt={response.rslt}')
        return response

def main():
    rclpy.init()
    service = CstmSrvNode()
    try:
        rclpy.spin(service)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
if __name__ == '__main__':
    main()
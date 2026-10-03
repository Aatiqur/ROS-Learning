#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_interfaces.msg import Complex


class ComplexMsgNode(Node):
    def __init__(self):
        super().__init__('complex_msg_node') #node name
        self.publisher = self.create_publisher(Complex, 'complex_data', 10)
        self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = Complex()
        msg.real = 1
        msg.imaginary = 5

        self.publisher.publish(msg)


def main():
    rclpy.init()
    node = ComplexMsgNode()
    rclpy.spin(node)


if __name__ == '__main__':
    main()
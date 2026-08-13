#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class first_node(Node):
    def __init__(self):
        super().__init__('first_publisher')
        self.publisher = self.create_publisher(String, "pub", 10)
        self.timer = self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        msg = String()
        msg.data = "Hello ROS2"
        self.publisher.publish(msg)
    


def main():
    rclpy.init()
    node = first_node()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
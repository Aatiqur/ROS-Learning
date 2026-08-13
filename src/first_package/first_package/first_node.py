#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
import std_msgs.msg 
import String

class first_node(Node):
    def __init__(self):
        super().__init__('first_publisher')
        self.publisher_ = self.create_publisher(String, "hello ros", 10)
        

def main():
    rclpy.init()
    node = first_node()
    rclpy.spin(node)

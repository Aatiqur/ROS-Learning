import rclpy
from rclpy.node import Node
from std_msgs.msg import String



class first_subscriber(Node):
    def __init__(self):
        super().__init__('first_subscriber')
        self.subscription = self.create_subscription(String, 'pub', self.listener_callback, 10) 
        #set the topic name here to 'pub'--should be same as the publisher's topic name and set as subscriber node 

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)



def main(args=None):
    rclpy.init(args=args)
    node = first_subscriber()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
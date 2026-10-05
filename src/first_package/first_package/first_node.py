import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class first_node(Node):
    def __init__(self):
        super().__init__('first_publisher') #set the name of the node to "first_publisher"
        self.publisher = self.create_publisher(String, "pub", 10) #set the topic name here to "pub" and set as pulsiher node
        self.timer = self.create_timer(0.5, self.timer_callback) #set the timer to 0.5 seconds

    def timer_callback(self):
        msg = String()
        msg.data = "Hello ROS2" #the message to be published or sent
        self.publisher.publish(msg) #publishing the message to he topic
        logged_msg = f"Published message: {msg.data}" #log the published message
        self.get_logger().info(logged_msg) #log the message to the console
    


def main():
    rclpy.init() #initialize the ROS2 communication
    node = first_node() #create an instance of the first_node class
    rclpy.spin(node) #keep the node running and listening for messages until the program is interrupted

if __name__ == '__main__': #check if the script is being run directly (not imported as a module)
    main()
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
	talker_node = Node(
		package='first_package',
		executable='first_publisher',
		name='talker',
		output='screen',
	)

	listener_node = Node(
		package='first_package',
		executable='first_subscriber',
		name='listener',
		output='screen',
	)

	return LaunchDescription([
		talker_node,
		listener_node,
	])

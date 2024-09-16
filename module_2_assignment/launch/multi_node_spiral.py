from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )
 

    drive_spiral=Node(
        package='drive_mobile_robot',
        executable='spiral',
        name='drive_spiral'
    )



    return LaunchDescription([ turtlesim, drive_spiral])
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )
 

    drive_spiral=Node(
        package='module_2_assignment',
        executable='spiral',
        name='drive_spiral'
    )



    return LaunchDescription([ turtlesim, drive_spiral])
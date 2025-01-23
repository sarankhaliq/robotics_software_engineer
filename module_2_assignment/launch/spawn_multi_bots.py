from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
def generate_launch_description():

    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )

    spawn_turtle=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 5.0, y: 2.0, theta: 1.57, name: 'turtle2'}\""],    
        name='spawn_turtle',
        shell=True

    )

 
    multi_circle=Node(
        package='module_2_assignment',
        executable='multi_circle',
        name='multi_circle',
    )

    multi_circle2=Node(
        package='module_2_assignment',
        executable='multi_circle',
        name='multi_circle2',
        parameters=[{'custom_topic': 'turtle2/cmd_vel', 'radius': 2.0}]
    )

    return LaunchDescription([ turtlesim, multi_circle, multi_circle2, spawn_turtle])
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, TimerAction, RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():

    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )

    spawn_turtle2=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 2.0, y: 10.0, theta: 1.57, name: 'turtle2'}\""],    
        name='spawn_turtle1',
        shell=True
    )

    spawn_turtle3=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 4.0, y: 8.0, theta: 1.57, name: 'turtle3'}\""],    
        name='spawn_turtle3',
        shell=True
    )


    spawn_turtle4=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 8.0, y: 4.0, theta: 1.57, name: 'turtle4'}\""],    
        name='spawn_turtle4',
        shell=True
    )
    spawn_turtle5=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 10.0, y: 2.0, theta: 1.57, name: 'turtle5'}\""],    
        name='spawn_turtle5',
        shell=True
    )
    clear_turtle1=ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/clear', 'std_srvs/srv/Empty'],
        name='clear_turtle1',
        shell=True
    )
    

    return LaunchDescription([
         turtlesim, 
         spawn_turtle2, 
         spawn_turtle3, 
         spawn_turtle4, 
         spawn_turtle5, 
    ])
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    turtlesim=Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )
 
    user_radius=float(input("Enter the radius value: "))
    drive_circle=Node(
        package='drive_mobile_robot',
        executable='circle',
        name='drive_circle',
        parameters=[{'radius': user_radius}]
    )



    return LaunchDescription([ turtlesim, drive_circle])
# Module 2 Assignment:

### Task 1: Create a Custom ROS 2 Node

```
ros2 run turtlesim turtlesim_node
```

```
ros2 run module_2_assignment circle
```

```
ros2 run module_2_assignment spiral
```

### Task 2: Develop a Launch File

```
ros2 launch module_2_assignment multi_node_circle.launch.py
```

#### Description of Launch File and Node

The user specifies the Radius of Circle in Launch file as described in Launch file

```
user_radius=float(input("Enter the radius value: "))
```

This user Input is sent as Parameter with the ROS2 Node

This parameter is used using `get_parameter` in our node and circle is drawn based on this parameter

### Task 3: Modify the Turtlesim Simulation Environment

```
ros2 launch module_2_assignment spawn_5_bots.launch.py
```

### Task 4: Modify Turtlesim Behavior with Parameters

```
ros2 run turtlesim turtlesim_node
```

```
ros2 run module_2_assignment task_4
```


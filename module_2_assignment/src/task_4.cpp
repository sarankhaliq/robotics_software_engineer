#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

class SpeedControl : public rclcpp::Node
{
public:
    SpeedControl() : Node("speed_control_dynamic"), toggle_(1) {
        // Declare and initialize the parameter
        this->declare_parameter("linear", rclcpp::PARAMETER_INTEGER);
        this->set_parameter(rclcpp::Parameter("linear", toggle_));

        // Initialize the publisher
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);

        // Timer to toggle the parameter and publish messages
        timer_ = this->create_wall_timer(
            std::chrono::seconds(2), // Toggle every 2 seconds
            [this]() {
                // Toggle the parameter value between 1 and -1
                toggle_ = -toggle_;
                this->set_parameter(rclcpp::Parameter("linear", toggle_));

                // Update and publish the Twist message
                auto message = geometry_msgs::msg::Twist();
                message.linear.x = toggle_; // Use the toggled value
                message.angular.z = 0.0;    // No angular velocity

                publisher_->publish(message);
                RCLCPP_INFO(this->get_logger(), "Toggled linear velocity: %.2f", message.linear.x);
            }
        );
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int toggle_; // Variable to hold the current parameter value
};

// Main function to start the node
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SpeedControl>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}


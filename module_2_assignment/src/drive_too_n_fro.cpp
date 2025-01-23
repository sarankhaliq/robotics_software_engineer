#include "rclcpp/rclcpp.hpp"
#include "turtlesim/srv/teleport_relative.hpp"
#include <memory>

class TurtleTeleportNode : public rclcpp::Node, public std::enable_shared_from_this<TurtleTeleportNode>
{
public:
    TurtleTeleportNode() : Node("turtle_teleport_node")
    {
        // Create a client to the teleport_relative service
        teleport_client_ = this->create_client<turtlesim::srv::TeleportRelative>("/turtle1/teleport_relative");
        
        // Ensure the service is available before sending a request
        while (!teleport_client_->wait_for_service(std::chrono::seconds(1))) {
            RCLCPP_WARN(this->get_logger(), "Waiting for /turtle1/teleport_relative service to be available...");
        }

        // Move turtle forward by 2 units
        teleport(2.0, 0.0);
        rclcpp::sleep_for(std::chrono::seconds(1));

        // Move turtle backward by -2 units
        teleport(-2.0, 0.0);
    }

private:
    rclcpp::Client<turtlesim::srv::TeleportRelative>::SharedPtr teleport_client_;

    void teleport(float linear, float angular)
    {
        auto request = std::make_shared<turtlesim::srv::TeleportRelative::Request>();
        request->linear = linear;
        request->angular = angular;

        // Send the request and wait for the result
        auto result = teleport_client_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(shared_from_this(), result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            RCLCPP_INFO(this->get_logger(), "Teleportation successful: moved %f units", linear);
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to teleport the turtle.");
        }
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    // Create the node as a shared pointer
    auto node = std::make_shared<TurtleTeleportNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

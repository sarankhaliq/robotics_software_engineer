#include "rclcpp/rclcpp.hpp"
#include "turtlesim/srv/teleport_relative.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 3) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: teleport_relative_client linear_distance angular_distance");
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("teleport_relative_client");
  rclcpp::Client<turtlesim::srv::TeleportRelative>::SharedPtr client =
    node->create_client<turtlesim::srv::TeleportRelative>("/turtle1/teleport_relative");

  auto request = std::make_shared<turtlesim::srv::TeleportRelative::Request>();
  request->linear = std::stof(argv[1]);  
  request->angular = std::stof(argv[2]); 

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    return 0;  // Fix: Proper return statement
  } 
  else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service teleport_relative");
  }

  rclcpp::shutdown();
  return 0;
}

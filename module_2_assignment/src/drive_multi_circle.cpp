#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std;
using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("minimal_publisher"), count_(0)
    {
      this->declare_parameter<double>("radius", 1.0);
      this->declare_parameter<string>("custom_topic", "/turtle1/cmd_vel");


      // Retrieve the value of the "radius" parameter
      this->get_parameter("radius", radius_);
      topic_=this->get_parameter("custom_topic").as_string();
      
      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(topic_, 10);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
    }
  private:
    void timer_callback()
    {

      auto message = geometry_msgs::msg::Twist();
      message.linear.x = 1;
      message.linear.y = 0;
      message.linear.z = 0;      
      message.angular.x = 0;
      message.angular.y = 0;
      message.angular.z = message.linear.x/radius_;  // Liner velocity = Angular velocity * Radius
      RCLCPP_INFO(this->get_logger(),"Robot is Moving in circle");
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    size_t count_;
    double radius_;
    string topic_;
};

int main(int argc, char * argv[])
{

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
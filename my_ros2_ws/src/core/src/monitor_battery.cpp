#include <iostream>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/battery_state.hpp"

class BatterySubscriber : public rclcpp::Node
{
public:
  BatterySubscriber() : Node("battery_subscriber")
  {
    // Create a subscription to the "/battery_state" topic
    battery_subscription_ = create_subscription<sensor_msgs::msg::BatteryState>(
        "/battery_state",
        rclcpp::QoS(10).best_effort(),
        std::bind(&BatterySubscriber::batteryCallback, this, std::placeholders::_1));
  }

private:
  void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
  {
    // Check if the battery percentage is available in the message
    if (msg->percentage >= 0.0)
    {
      // Echo the battery percentage in the terminal
      RCLCPP_INFO(this->get_logger(), "Battery Percentage: %.2f", msg->percentage * 100.0);
    }
    else
    {
      RCLCPP_WARN(this->get_logger(), "Battery percentage is not available");
    }
  }

  rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_subscription_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<BatterySubscriber>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

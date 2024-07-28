#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cmath>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "cv_bridge/cv_bridge.h"
#include "opencv2/opencv.hpp"


using namespace std::chrono_literals;

class LineFollowing : public rclcpp::Node
{
public:
  LineFollowing()
  : Node("line_follower")
  {
    _subscriber = this->create_subscription<sensor_msgs::msg::Image>(
      "/camera/image_raw", 10, std::bind(&LineFollowing::subCallback, this, std::placeholders::_1));

    _publisher = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    // _timer = this->create_wall_timer(
    //   100ms, std::bind(&LineFollowing::timerCallback, this));
  }

private:
  void subCallback(const sensor_msgs::msg::Image::SharedPtr img)
  {
    //get ros data
    //ros to opencv data
    //show using opencv
   
  }

//   void timerCallback()
//   {
//     auto cmd = geometry_msgs::msg::Twist();
//     RCLCPP_INFO(this->get_logger(), "Pose x: '%f', y: '%f', theta: '%f'", cmd);

//     _publisher->publish(cmd);
//   }

  rclcpp::TimerBase::SharedPtr _timer;
  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr _subscriber;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _publisher;
  size_t _count;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LineFollowing>());
  rclcpp::shutdown();
  return 0;
}

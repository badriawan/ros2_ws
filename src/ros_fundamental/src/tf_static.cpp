#include <memory>

#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/static_transform_broadcaster.h"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class StaticTransform : public rclcpp::Node
{
  public:
    StaticTransform()
    : Node("static_transform"), broadcaster_(this)
    {
      timer_ = this->create_wall_timer(
      2000ms, std::bind(&StaticTransform::timer_callback, this));
    }

  private:
    void timer_callback()
    {
        geometry_msgs::msg::TransformStamped t;

        t.header.stamp = this->get_clock()->now();
        t.header.frame_id = "world";
        t.child_frame_id = "base_link";
        x_trans +=1;
        t.transform.translation.x = x_trans;
        t.transform.translation.y = 2.0;
        t.transform.translation.z = 3.0;
        tf2::Quaternion q;
        q.setRPY(0,0,0);
        t.transform.rotation.x = q.x();
        t.transform.rotation.y = q.y();
        t.transform.rotation.z = q.z();
        t.transform.rotation.w = q.w();

        broadcaster_.sendTransform(t);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    tf2_ros::StaticTransformBroadcaster broadcaster_;
    double x_trans;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StaticTransform>());
  rclcpp::shutdown();
  return 0;
}
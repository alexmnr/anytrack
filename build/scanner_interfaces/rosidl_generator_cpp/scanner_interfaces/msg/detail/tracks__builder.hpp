// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scanner_interfaces:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef SCANNER_INTERFACES__MSG__DETAIL__TRACKS__BUILDER_HPP_
#define SCANNER_INTERFACES__MSG__DETAIL__TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scanner_interfaces/msg/detail/tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scanner_interfaces
{

namespace msg
{

namespace builder
{

class Init_Tracks_tracks
{
public:
  Init_Tracks_tracks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scanner_interfaces::msg::Tracks tracks(::scanner_interfaces::msg::Tracks::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scanner_interfaces::msg::Tracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scanner_interfaces::msg::Tracks>()
{
  return scanner_interfaces::msg::builder::Init_Tracks_tracks();
}

}  // namespace scanner_interfaces

#endif  // SCANNER_INTERFACES__MSG__DETAIL__TRACKS__BUILDER_HPP_
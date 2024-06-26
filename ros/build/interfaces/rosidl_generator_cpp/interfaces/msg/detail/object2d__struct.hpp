// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Object2d.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OBJECT2D__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__OBJECT2D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Object2d __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Object2d __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2d_
{
  using Type = Object2d_<ContainerAllocator>;

  explicit Object2d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->x_max = 0ll;
      this->y_max = 0ll;
      this->radius = 0.0;
      this->diff = 0ll;
    }
  }

  explicit Object2d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->x_max = 0ll;
      this->y_max = 0ll;
      this->radius = 0.0;
      this->diff = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _x_max_type =
    int64_t;
  _x_max_type x_max;
  using _y_max_type =
    int64_t;
  _y_max_type y_max;
  using _radius_type =
    double;
  _radius_type radius;
  using _diff_type =
    int64_t;
  _diff_type diff;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__x_max(
    const int64_t & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__y_max(
    const int64_t & _arg)
  {
    this->y_max = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__diff(
    const int64_t & _arg)
  {
    this->diff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Object2d_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Object2d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Object2d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Object2d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Object2d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Object2d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Object2d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Object2d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Object2d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Object2d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Object2d
    std::shared_ptr<interfaces::msg::Object2d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Object2d
    std::shared_ptr<interfaces::msg::Object2d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2d_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->diff != other.diff) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object2d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2d_

// alias to use template instance with default allocator
using Object2d =
  interfaces::msg::Object2d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__OBJECT2D__STRUCT_HPP_

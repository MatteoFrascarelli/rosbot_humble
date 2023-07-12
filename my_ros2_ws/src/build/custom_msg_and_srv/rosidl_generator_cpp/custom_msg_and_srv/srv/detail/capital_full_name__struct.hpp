// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg_and_srv:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__STRUCT_HPP_
#define CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Request __declspec(deprecated)
#endif

namespace custom_msg_and_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CapitalFullName_Request_
{
  using Type = CapitalFullName_Request_<ContainerAllocator>;

  explicit CapitalFullName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->surname = "";
    }
  }

  explicit CapitalFullName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    surname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->surname = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _surname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _surname_type surname;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__surname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->surname = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Request
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Request
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CapitalFullName_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->surname != other.surname) {
      return false;
    }
    return true;
  }
  bool operator!=(const CapitalFullName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CapitalFullName_Request_

// alias to use template instance with default allocator
using CapitalFullName_Request =
  custom_msg_and_srv::srv::CapitalFullName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msg_and_srv


#ifndef _WIN32
# define DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Response __declspec(deprecated)
#endif

namespace custom_msg_and_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CapitalFullName_Response_
{
  using Type = CapitalFullName_Response_<ContainerAllocator>;

  explicit CapitalFullName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capitalfullname = "";
    }
  }

  explicit CapitalFullName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : capitalfullname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capitalfullname = "";
    }
  }

  // field types and members
  using _capitalfullname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _capitalfullname_type capitalfullname;

  // setters for named parameter idiom
  Type & set__capitalfullname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->capitalfullname = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Response
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg_and_srv__srv__CapitalFullName_Response
    std::shared_ptr<custom_msg_and_srv::srv::CapitalFullName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CapitalFullName_Response_ & other) const
  {
    if (this->capitalfullname != other.capitalfullname) {
      return false;
    }
    return true;
  }
  bool operator!=(const CapitalFullName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CapitalFullName_Response_

// alias to use template instance with default allocator
using CapitalFullName_Response =
  custom_msg_and_srv::srv::CapitalFullName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msg_and_srv

namespace custom_msg_and_srv
{

namespace srv
{

struct CapitalFullName
{
  using Request = custom_msg_and_srv::srv::CapitalFullName_Request;
  using Response = custom_msg_and_srv::srv::CapitalFullName_Response;
};

}  // namespace srv

}  // namespace custom_msg_and_srv

#endif  // CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice

#ifndef PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__STRUCT_HPP_
#define PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__publisher_and_subscriber__msg__EmployeeSalary __attribute__((deprecated))
#else
# define DEPRECATED__publisher_and_subscriber__msg__EmployeeSalary __declspec(deprecated)
#endif

namespace publisher_and_subscriber
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmployeeSalary_
{
  using Type = EmployeeSalary_<ContainerAllocator>;

  explicit EmployeeSalary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->surname = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->tasks.begin(), this->tasks.end(), "");
      this->salary = 0;
    }
  }

  explicit EmployeeSalary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    surname(_alloc),
    tasks(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->surname = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->tasks.begin(), this->tasks.end(), "");
      this->salary = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _surname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _surname_type surname;
  using _tasks_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>;
  _tasks_type tasks;
  using _salary_type =
    int16_t;
  _salary_type salary;

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
  Type & set__tasks(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }
  Type & set__salary(
    const int16_t & _arg)
  {
    this->salary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator> *;
  using ConstRawPtr =
    const publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__publisher_and_subscriber__msg__EmployeeSalary
    std::shared_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__publisher_and_subscriber__msg__EmployeeSalary
    std::shared_ptr<publisher_and_subscriber::msg::EmployeeSalary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmployeeSalary_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->surname != other.surname) {
      return false;
    }
    if (this->tasks != other.tasks) {
      return false;
    }
    if (this->salary != other.salary) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmployeeSalary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmployeeSalary_

// alias to use template instance with default allocator
using EmployeeSalary =
  publisher_and_subscriber::msg::EmployeeSalary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace publisher_and_subscriber

#endif  // PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__STRUCT_HPP_

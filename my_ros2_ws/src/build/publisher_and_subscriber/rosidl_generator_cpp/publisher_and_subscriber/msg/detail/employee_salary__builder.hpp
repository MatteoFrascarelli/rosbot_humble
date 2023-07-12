// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice

#ifndef PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__BUILDER_HPP_
#define PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "publisher_and_subscriber/msg/detail/employee_salary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace publisher_and_subscriber
{

namespace msg
{

namespace builder
{

class Init_EmployeeSalary_salary
{
public:
  explicit Init_EmployeeSalary_salary(::publisher_and_subscriber::msg::EmployeeSalary & msg)
  : msg_(msg)
  {}
  ::publisher_and_subscriber::msg::EmployeeSalary salary(::publisher_and_subscriber::msg::EmployeeSalary::_salary_type arg)
  {
    msg_.salary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::publisher_and_subscriber::msg::EmployeeSalary msg_;
};

class Init_EmployeeSalary_tasks
{
public:
  explicit Init_EmployeeSalary_tasks(::publisher_and_subscriber::msg::EmployeeSalary & msg)
  : msg_(msg)
  {}
  Init_EmployeeSalary_salary tasks(::publisher_and_subscriber::msg::EmployeeSalary::_tasks_type arg)
  {
    msg_.tasks = std::move(arg);
    return Init_EmployeeSalary_salary(msg_);
  }

private:
  ::publisher_and_subscriber::msg::EmployeeSalary msg_;
};

class Init_EmployeeSalary_surname
{
public:
  explicit Init_EmployeeSalary_surname(::publisher_and_subscriber::msg::EmployeeSalary & msg)
  : msg_(msg)
  {}
  Init_EmployeeSalary_tasks surname(::publisher_and_subscriber::msg::EmployeeSalary::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return Init_EmployeeSalary_tasks(msg_);
  }

private:
  ::publisher_and_subscriber::msg::EmployeeSalary msg_;
};

class Init_EmployeeSalary_name
{
public:
  Init_EmployeeSalary_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmployeeSalary_surname name(::publisher_and_subscriber::msg::EmployeeSalary::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EmployeeSalary_surname(msg_);
  }

private:
  ::publisher_and_subscriber::msg::EmployeeSalary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::publisher_and_subscriber::msg::EmployeeSalary>()
{
  return publisher_and_subscriber::msg::builder::Init_EmployeeSalary_name();
}

}  // namespace publisher_and_subscriber

#endif  // PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__BUILDER_HPP_

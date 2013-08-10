#include "hello.h"

#include <iostream>
#include <stdexcept>

void hello_greeter::operator()() const {
  std::cout << "Hello " << message_ << "!" << std::endl;
}

void hello_greeter::set_message(const std::string& message) {
  if (message.empty())
    throw new std::length_error("My message must not be empty!");
  if (message == message_)
    throw new std::invalid_argument("Why are you setting the same message again?");

  message_ = message;
}


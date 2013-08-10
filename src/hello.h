#pragma once

#include <string>

class hello_greeter {
  public:
    hello_greeter() : message_("World") {}

  public:
    void operator()() const;

    void set_message(const std::string& message);
    std::string message() const { return message_; }

  private:
    std::string message_;
};


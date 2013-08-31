#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <hello.h>
#include <stdexcept>

TEST_CASE("hello greeter has a usable default message set") {
  REQUIRE(hello_greeter().message() == "World");
}

TEST_CASE("hello greeter message can be set to different non-empty strings") {
  hello_greeter testee;

  REQUIRE_NOTHROW(testee.set_message("a"));
  REQUIRE(testee.message() == "a");

  REQUIRE_NOTHROW(testee.set_message("Universe"));
  REQUIRE(testee.message() == "Universe");
}

TEST_CASE("hello greeter throws std::length_error if an empty message is set") {
  REQUIRE_THROWS_AS(hello_greeter().set_message(""), std::length_error);
}

TEST_CASE("hello greeter throws std::invalid_argument if same message is set again") {
  REQUIRE_THROWS_AS(hello_greeter().set_message("World"), std::invalid_argument);
}


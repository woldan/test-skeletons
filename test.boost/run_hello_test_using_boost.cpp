#define BOOST_TEST_MODULE HelloTest
//#include <boost/test/included/unit_test.hpp>
#include <boost/test/unit_test.hpp> // linked variant - see above for header-only
#include <hello.h>

BOOST_AUTO_TEST_CASE(hello_greeter_has_a_usable_default_message_set) {
  BOOST_CHECK_EQUAL(hello_greeter().message(), "World");
}

BOOST_AUTO_TEST_CASE(hello_greeter_message_can_be_set_to_different_non_empty_strings) {
  hello_greeter testee;

  BOOST_REQUIRE_NO_THROW(testee.set_message("a"));
  BOOST_CHECK_EQUAL(testee.message(), "a");

  BOOST_REQUIRE_NO_THROW(testee.set_message("Universe"));
  BOOST_CHECK_EQUAL(testee.message(), "Universe");
}


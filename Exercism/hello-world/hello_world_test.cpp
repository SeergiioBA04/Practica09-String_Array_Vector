// Include the header file with the definitions of the functions you create.
#include "hello_world.h"

// Include the test framework.
#ifdef EXERCISM_TEST_SUITE
#include <catch2/catch.hpp>
#else
#include "test/catch.hpp"
#endif
#if defined(EXERCISM_RUN_ALL_TESTS)
// Declares a single test.
TEST_CASE("test_hello")
{
    // Check if your function returns "Hello, World!".
    REQUIRE(hello_world::hello() == "Hello, World!");
}
#endif

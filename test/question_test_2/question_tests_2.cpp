#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Prime check"){
	REQUIRE(is_prime(13) == true);
}

TEST_CASE("Prime check 2"){
	REQUIRE(is_prime(17) == true);
}

TEST_CASE("Prime check 3"){
	REQUIRE(is_prime(22) == false);
}

TEST_CASE("Prime check 4"){
	REQUIRE(is_prime(47) == true);
}
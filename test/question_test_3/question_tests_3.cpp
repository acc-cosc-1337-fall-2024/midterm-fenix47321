#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("GCD 1"){
	REQUIRE(find_gcd(15,25) == 5);
}

TEST_CASE("GCD 2"){
	REQUIRE(find_gcd(16,32) == 16);
}

TEST_CASE("GCD 3"){
	REQUIRE(find_gcd(159,309) == 3);
}
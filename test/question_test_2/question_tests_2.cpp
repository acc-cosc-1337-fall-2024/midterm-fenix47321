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

#include<vector>
TEST_CASE("Get primes 1"){
	std::vector<int> tester{2,3,5,7};
	REQUIRE(get_primes(10) == tester);
}

TEST_CASE("Get primes 2"){
	std::vector<int> tester{2,3,5,7,11,13};
	REQUIRE(get_primes(15) == tester);
}

TEST_CASE("Get primes 3"){
	std::vector<int> tester{2,3,5,7,11,13,17,19,23,29};
	REQUIRE(get_primes(30) == tester);
}

TEST_CASE("Get primes 4"){
	std::vector<int> tester{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	REQUIRE(get_primes(50) == tester);
}
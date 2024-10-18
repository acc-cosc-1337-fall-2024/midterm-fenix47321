#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test commisions 1"){
	REQUIRE(get_sales_commission(100) == 5);
	REQUIRE(get_sales_commission(750) == 45);
	REQUIRE(get_sales_commission(1100) == 77);
	REQUIRE(get_sales_commission(1750) == 140);
}

TEST_CASE("Test commisions (Static_cast)"){
	// Cast just cuts .x instead of rounding??
	REQUIRE(get_sales_commission(499) == 24);
	REQUIRE(get_sales_commission(999) == 59);
	REQUIRE(get_sales_commission(1499) == 104);
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE ("Vector is summed", "[sum]") {
    REQUIRE( Sum( std::vector<int> {10,20,30} ) == 60 );
    REQUIRE( Sum( std::vector<int> {0,0,1} ) == 1 );
    REQUIRE( Sum( std::vector<int> {3,3,3} ) == 9 );
}

TEST_CASE ("Sign is correct", "[sign]") {
    REQUIRE(Sign(-100) == -1);
    REQUIRE(Sign(100) == 1);
    REQUIRE(Sign(0) == 0);
}

TEST_CASE ("Divide by 2 is correct", "[divide]") {
    REQUIRE(RemoveTwos(16) == 1);
    REQUIRE(RemoveTwos(7) == 7);
    REQUIRE(RemoveTwos(26) == 13);
}
#include <catch2/catch.hpp>
#include "complex_ops.hpp"


TEST_CASE("Complex SUM") {
	REQUIRE(8 == complex_sum(7, 2));
}

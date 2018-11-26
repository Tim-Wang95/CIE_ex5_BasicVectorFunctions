#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "vectorfunctions.hpp"

TEST_CASE("Dot product") {
	double a[] = { 1,2,3 }; double b[] = { 2,3,4 };
	double result = vecfun::DotProduct(a, b, 3, 3);
	CHECK(result == 18);
}

TEST_CASE("Euclidean norm") {
	double a[] = { 3,4 };
	double result = vecfun::EuNorm(a, 2);
	CHECK(result == 5);
}

TEST_CASE("Maximum norm") {
	double a[] = { 6,7,0 };
	double result = vecfun::MaxNorm(a, 3);
	CHECK(result == 7);
}

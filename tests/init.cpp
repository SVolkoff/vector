#include <vector.hpp>
#include <catch.hpp>

SCENARIO(" init")
{
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}

SCENARIO(" init with param")
{ 
	vector_t vector(3); 
	REQUIRE(vector.size() == 3); 
	REQUIRE(vector.capacity() == 3); 
} 
SCENARIO("vector init with object")
{ 
	vector_t vector; 
	vector.push_back(5); 
	vector.push_back(6); 
	vector_t vector2(vector);
	REQUIRE(vector.size() == vector2.size());
	REQUIRE(vector.capacity() == vector2.capacity());
	REQUIRE(vector[0] == vector2[0]);
	REQUIRE(vector[1] == vector2[1]);
}


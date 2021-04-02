#include <iostream>

#include "Core/Test.h"

#include "../tests/Vec2/Vector2Tests.h"

int main(int argc, char *argv[])
	{
	// Build test array
	TestFn tests[] =
		{
		// MATH FUNCTION TESTS
		

		// VECTOR 2 TESTS
		FakeVector2Tests::test_to_string_1,
		FakeVector2Tests::test_to_string_2,
		FakeVector2Tests::test_length,
		FakeVector2Tests::test_squared_length,
		FakeVector2Tests::test_inverse_length,
		FakeVector2Tests::test_union,
		FakeVector2Tests::test_normalize,
		FakeVector2Tests::test_normalize_fast,
		FakeVector2Tests::test_get_normalized_value,
		FakeVector2Tests::test_is_normalized_true,
		FakeVector2Tests::test_is_normalized_false,
		
		// VECTOR 3 TESTS
		// VECTOR 4 TESTS
		// MAT 2 TESTS
		// MAT 3 TESTS
		// MAT 4 TESTS
		// QUAT TESTS
		// AABB TESTS
		// RAY TESTS
		// TRANSFORM TESTS
		};

	// Run all tests
	int exitCode = perform_tests(tests, sizeof(tests) / sizeof(TestFn));
	// std::system("PAUSE");
	return exitCode;
	}


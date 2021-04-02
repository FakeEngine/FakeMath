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
		FakeVector2Tests::test_union,
		
		FakeVector2Tests::test_to_string_1,
		FakeVector2Tests::test_to_string_2,
		
		FakeVector2Tests::test_length,
		FakeVector2Tests::test_squared_length,
		FakeVector2Tests::test_inverse_length,

		FakeVector2Tests::test_normalize,
		FakeVector2Tests::test_normalize_fast,
		FakeVector2Tests::test_get_normalized_value,
		FakeVector2Tests::test_is_normalized_true,
		FakeVector2Tests::test_is_normalized_false,

		FakeVector2Tests::test_is_one_true,
		FakeVector2Tests::test_is_one_false,
		FakeVector2Tests::test_is_any_one_true,
		FakeVector2Tests::test_is_any_one_false,
		FakeVector2Tests::test_is_zero_true,
		FakeVector2Tests::test_is_zero_false,
		FakeVector2Tests::test_is_any_zero_true,
		FakeVector2Tests::test_is_any_zero_false,
		FakeVector2Tests::test_absolute_true,
		FakeVector2Tests::test_absolute_false,
		FakeVector2Tests::test_negate_true,
		FakeVector2Tests::test_negate_false,
		FakeVector2Tests::test_get_absolute_true,
		FakeVector2Tests::test_get_absolute_false,
		FakeVector2Tests::test_get_negative_true,
		FakeVector2Tests::test_get_negative_false,
		FakeVector2Tests::test_get_negative_true,
		FakeVector2Tests::test_get_negative_false,
		FakeVector2Tests::test_average_arithmetic,
		FakeVector2Tests::test_min,
		FakeVector2Tests::test_max,
		FakeVector2Tests::test_is_nan,
		FakeVector2Tests::test_is_infinity,
		FakeVector2Tests::test_near_equal,
		FakeVector2Tests::test_near_equal_with_epsilon,
		
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


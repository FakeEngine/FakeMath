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
		FakeVector2Tests::test_negate_operator,
		FakeVector2Tests::test_get_absolute_true,
		FakeVector2Tests::test_get_absolute_false,
		FakeVector2Tests::test_get_negative_true,
		FakeVector2Tests::test_get_negative_false,
		FakeVector2Tests::test_get_negative_true,
		FakeVector2Tests::test_get_negative_false,
		FakeVector2Tests::test_average_arithmetic,
		FakeVector2Tests::test_min_value,
		FakeVector2Tests::test_min_vector_1,
		FakeVector2Tests::test_min_vector_2,
		FakeVector2Tests::test_max_value,
		FakeVector2Tests::test_max_vector_1,
		FakeVector2Tests::test_max_vector_2,
		FakeVector2Tests::test_is_nan,
		FakeVector2Tests::test_is_infinity,
		FakeVector2Tests::test_near_equal,
		FakeVector2Tests::test_near_equal_with_epsilon,

		FakeVector2Tests::test_add_vector_1,
		FakeVector2Tests::test_add_vector_2,
		FakeVector2Tests::test_add_scalar_1,
		FakeVector2Tests::test_add_scalar_2,
		FakeVector2Tests::test_add_vector_operator_1,
		FakeVector2Tests::test_add_vector_operator_2,
		FakeVector2Tests::test_add_scalar_operator_1,
		FakeVector2Tests::test_add_scalar_operator_2,
		FakeVector2Tests::test_add_one_unit,
		FakeVector2Tests::test_add_reverse_operator,

		FakeVector2Tests::test_subtract_vector_1,
		FakeVector2Tests::test_subtract_vector_2,
		FakeVector2Tests::test_subtract_scalar_1,
		FakeVector2Tests::test_subtract_scalar_2,
		FakeVector2Tests::test_subtract_vector_operator_1,
		FakeVector2Tests::test_subtract_vector_operator_2,
		FakeVector2Tests::test_subtract_scalar_operator_1,
		FakeVector2Tests::test_subtract_scalar_operator_2,
		FakeVector2Tests::test_subtract_one_unit,
		FakeVector2Tests::test_subtract_reverse_operator,

		FakeVector2Tests::test_multiply_vector_1,
		FakeVector2Tests::test_multiply_vector_2,
		FakeVector2Tests::test_multiply_scalar_1,
		FakeVector2Tests::test_multiply_scalar_2,
		FakeVector2Tests::test_multiply_vector_operator_1,
		FakeVector2Tests::test_multiply_vector_operator_2,
		FakeVector2Tests::test_multiply_scalar_operator_1,
		FakeVector2Tests::test_multiply_scalar_operator_2,
		FakeVector2Tests::test_multiply_reverse_operator,

		FakeVector2Tests::test_divide_vector_1,
		FakeVector2Tests::test_divide_vector_2,
		FakeVector2Tests::test_divide_vector_false,
		FakeVector2Tests::test_divide_scalar_operator_1,
		FakeVector2Tests::test_divide_scalar_operator_2,
		FakeVector2Tests::test_divide_scalar_operator_false,
		FakeVector2Tests::test_divide_vector_operator_1,
		FakeVector2Tests::test_divide_vector_operator_2,
		FakeVector2Tests::test_divide_vector_operator_false,
		FakeVector2Tests::test_divide_scalar_operator_1,
		FakeVector2Tests::test_divide_scalar_operator_2,
		FakeVector2Tests::test_divide_scalar_operator_false,
		FakeVector2Tests::test_divide_reverse_operator,
		
		FakeVector2Tests::test_floor,
		FakeVector2Tests::test_round,
		FakeVector2Tests::test_ceil,
		FakeVector2Tests::test_frac,
		FakeVector2Tests::test_clamp_1,
		FakeVector2Tests::test_clamp_2,
		FakeVector2Tests::test_distance,
		FakeVector2Tests::test_distance_squared,
		FakeVector2Tests::test_dot,
		FakeVector2Tests::test_dot_operator,
		FakeVector2Tests::test_cross,
		FakeVector2Tests::test_cross_operator,
		FakeVector2Tests::test_lerp_1,
		FakeVector2Tests::test_lerp_2,

		FakeVector2Tests::test_vector_equals_vector_true,
		FakeVector2Tests::test_vector_equals_vector_false,
		FakeVector2Tests::test_vector_equals_number_true,
		FakeVector2Tests::test_vector_equals_number_false,
		FakeVector2Tests::test_vector_equals_not_vector_true,
		FakeVector2Tests::test_vector_equals_not_vector_false,
		FakeVector2Tests::test_vector_equals_not_number_true,
		FakeVector2Tests::test_vector_equals_not_number_false,
		FakeVector2Tests::test_vector_less_vector_true,
		FakeVector2Tests::test_vector_less_vector_false,
		FakeVector2Tests::test_vector_less_number_true,
		FakeVector2Tests::test_vector_less_number_false,
		FakeVector2Tests::test_vector_less_equal_vector_true,
		FakeVector2Tests::test_vector_less_equal_vector_false,
		FakeVector2Tests::test_vector_less_equal_number_true,
		FakeVector2Tests::test_vector_less_equal_number_false,
		FakeVector2Tests::test_vector_greater_vector_true,
		FakeVector2Tests::test_vector_greater_vector_false,
		FakeVector2Tests::test_vector_greater_number_true,
		FakeVector2Tests::test_vector_greater_number_false,
		FakeVector2Tests::test_vector_greater_equal_vector_true,
		FakeVector2Tests::test_vector_greater_equal_vector_false,
		FakeVector2Tests::test_vector_greater_equal_number_true,
		FakeVector2Tests::test_vector_greater_equal_number_false,
		FakeVector2Tests::test_pointer_access,
		FakeVector2Tests::test_array_access,

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


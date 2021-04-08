#ifndef FAKE_VECTOR_2_COMPONENT_TEST_H
#define FAKE_VECTOR_2_COMPONENT_TEST_H

namespace FakeVector2Tests
	{
	int test_is_one_true();
	int test_is_one_false();

	int test_is_any_one_true();
	int test_is_any_one_false();

	int test_is_zero_true();
	int test_is_zero_false();

	int test_is_any_zero_true();
	int test_is_any_zero_false();

	int test_absolute_true();
	int test_absolute_false();

	int test_negate_true();
	int test_negate_false();
	int test_negate_operator();

	int test_get_absolute_true();
	int test_get_absolute_false();

	int test_get_negative_true();
	int test_get_negative_false();

	int test_average_arithmetic();
	int test_min_vector_1();
	int test_min_vector_2();
	int test_min_value();
	int test_max_vector_1();
	int test_max_vector_2();
	int test_max_value();

	int test_is_nan();
	int test_is_infinity();

	int test_near_equal();
	int test_near_equal_with_epsilon();
	}

#endif
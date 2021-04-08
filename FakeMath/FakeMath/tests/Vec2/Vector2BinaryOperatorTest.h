#ifndef FAKE_VECTOR_2_OPERATOR_TEST_H
#define FAKE_VECTOR_2_OPERATOR_TEST_H

namespace FakeVector2Tests
	{
	int test_vector_equals_vector_true();
	int test_vector_equals_vector_false();
	int test_vector_equals_number_true();
	int test_vector_equals_number_false();

	int test_vector_equals_not_vector_true();
	int test_vector_equals_not_vector_false();
	int test_vector_equals_not_number_true();
	int test_vector_equals_not_number_false();

	int test_vector_less_vector_true();
	int test_vector_less_vector_false();
	int test_vector_less_number_true();
	int test_vector_less_number_false();

	int test_vector_less_equal_vector_true();
	int test_vector_less_equal_vector_false();
	int test_vector_less_equal_number_true();
	int test_vector_less_equal_number_false();

	int test_vector_greater_vector_true();
	int test_vector_greater_vector_false();
	int test_vector_greater_number_true();
	int test_vector_greater_number_false();

	int test_vector_greater_equal_vector_true();
	int test_vector_greater_equal_vector_false();
	int test_vector_greater_equal_number_true();
	int test_vector_greater_equal_number_false();

	int test_pointer_access();
	int test_array_access();
	}

#endif
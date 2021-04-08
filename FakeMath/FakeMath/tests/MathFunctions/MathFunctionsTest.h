#ifndef FAKE_MATH_FUNCTIONS_TEST_H
#define FAKE_MATH_FUNCTIONS_TEST_H

namespace FakeMathFunctionsTests
	{
	int test_mod_double();
	int test_mod_float();
	int test_mod_float_ptr();
	int test_mod_exp();
	int test_mod_exp_2();
	int test_mod_trunk();

	int test_trunk_to_int();
	int test_floor_to_int();
	int test_round_to_int();
	int test_ceil_to_int();
	int test_round_with_power_of_2_to_32signed_int();
	int test_round_with_power_of_2_to_64signed_int();
	int test_round_with_power_of_2_to_32unsigned_int();
	int test_round_with_power_of_2_to_64unsigned_int();

	int test_round_double();
	int test_round_float();
	int test_floor_double();
	int test_floor_float();
	int test_ceil_double();
	int test_ceil_float();


	}

#endif
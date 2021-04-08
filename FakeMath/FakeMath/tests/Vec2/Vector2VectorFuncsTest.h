#ifndef FAKE_VECTOR_2_VECTOR_FUNCS_TEST_H
#define FAKE_VECTOR_2_VECTOR_FUNCS_TEST_H

namespace FakeVector2Tests
	{
	int test_floor();
	int test_round();
	int test_ceil();
	int test_frac();

	int test_clamp_1();
	int test_clamp_2();
	
	int test_distance();
	int test_distance_squared();
	
	int test_dot();
	int test_dot_operator();
	
	int test_cross();
	int test_cross_operator();
	
	int test_lerp_1();
	int test_lerp_2();
	}

#endif
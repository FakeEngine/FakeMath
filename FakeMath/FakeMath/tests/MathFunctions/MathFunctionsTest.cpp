#include "MathFunctionsTest.h"
#include "../../src/Core/Test.h"

namespace FakeMathFunctionsTests
	{
	int test_mod_double()
		{
		double v0 = 420.0;
		double v1 = 32.1;
		double expected = 2.7;

		FakeTimer timer("FakeMathFunctionsTests::test_mod_double");
		double result = fake_mod(v0, v1);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}
	
	int test_mod_float()
		{
		float v0 = 420.0f;
		float v1 = 32.1f;
		float expected = 2.70002f;

		FakeTimer timer("FakeMathFunctionsTests::test_mod_float");
		float result = fake_mod(v0, v1);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}
	
	int test_mod_float_ptr()
		{
		float v0 = 420.5f;
		float intPart = 0.0f;

		FakeTimer timer("FakeMathFunctionsTests::test_mod_float_ptr");
		float fractionalPart = fake_modf(v0, &intPart);
		timer.Stop();

		if (!assert_equal(timer, intPart, 420) && !assert_equal(timer, fractionalPart, 0.5f))
			return -1;

		return 0;
		}
	
	int test_mod_exp()
		{
		float value = 5.1f;
		float expected = 164.022f;

		FakeTimer timer("FakeMathFunctionsTests::test_mod_exp");
		float result = fake_exp(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_mod_exp_2()
		{
		float value = 5.1f;
		float expected = 34.2967f;

		FakeTimer timer("FakeMathFunctionsTests::test_mod_exp_2");
		float result = fake_exp2(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_mod_trunk()
		{
		float value = 5.1f;
		float expected = 5.0f;

		FakeTimer timer("FakeMathFunctionsTests::test_mod_trunk");
		float result = fake_trunk(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_trunk_to_int()
		{
		float value = 5.1f;
		int32 expected = 5;

		FakeTimer timer("FakeMathFunctionsTests::test_trunk_to_int");
		int32 result = fake_trunk_to_int(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_floor_to_int()
		{
		float value = 5.1f;
		int32 expected = 5;

		FakeTimer timer("FakeMathFunctionsTests::test_floor_to_int");
		int32 result = fake_floor_to_int(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_to_int()
		{
		float value = 5.5f;
		int32 expected = 6;

		FakeTimer timer("FakeMathFunctionsTests::test_round_to_int");
		int32 result = fake_round_to_int(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_ceil_to_int()
		{
		float value = 5.5f;
		int32 expected = 6;

		FakeTimer timer("FakeMathFunctionsTests::test_ceil_to_int");
		int32 result = fake_ceil_to_int(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_with_power_of_2_to_32signed_int()
		{
		int32 value = 10;
		int32 expected = 16;

		FakeTimer timer("FakeMathFunctionsTests::test_round_with_power_of_2_to_32signed_int");
		int32 result = fake_round_up_to_power_of_2(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_with_power_of_2_to_64signed_int()
		{
		int64 value = 10;
		int64 expected = 16;

		FakeTimer timer("FakeMathFunctionsTests::test_round_with_power_of_2_to_64signed_int");
		int64 result = fake_round_up_to_power_of_2(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_with_power_of_2_to_32unsigned_int()
		{
		uint32 value = 10;
		uint32 expected = 16;

		FakeTimer timer("FakeMathFunctionsTests::test_round_with_power_of_2_to_32unsigned_int");
		uint32 result = fake_round_up_to_power_of_2(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_with_power_of_2_to_64unsigned_int()
		{
		uint64 value = 10;
		uint64 expected = 16;

		FakeTimer timer("FakeMathFunctionsTests::test_round_with_power_of_2_to_64unsigned_int");
		uint64 result = fake_round_up_to_power_of_2(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_double()
		{
		double value = 4.2;
		double expected = 4.0;	
		
		FakeTimer timer("FakeMathFunctionsTests::test_round_double");
		double result = fake_round(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round_float()
		{
		float value = 4.4f;
		float expected = 4.0f;

		FakeTimer timer("FakeMathFunctionsTests::test_round_float");
		float result = fake_round(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_floor_double()
		{
		double value = 4.2;
		double expected = 4.0;

		FakeTimer timer("FakeMathFunctionsTests::test_floor_double");
		double result = fake_floor(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_floor_float()
		{
		float value = 4.4f;
		float expected = 4.0f;

		FakeTimer timer("FakeMathFunctionsTests::test_floor_float");
		float result = fake_floor(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_ceil_double()
		{
		double value = 4.2;
		double expected = 5.0;

		FakeTimer timer("FakeMathFunctionsTests::test_ceil_double");
		double result = fake_ceil(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_ceil_float()
		{
		float value = 4.4f;
		float expected = 5.0f;

		FakeTimer timer("FakeMathFunctionsTests::test_ceil_float");
		float result = fake_ceil(value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
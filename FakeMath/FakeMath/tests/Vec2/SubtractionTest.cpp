#include "SubtractionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_subtract_vector_1()
		{
		FakeVec2f v(25.4f, 64.3f);
		FakeVec2f vOther(5.4f, 4.3f);
		FakeVec2f expected(20.0f, 60.0f);

		FakeTimer timer("FakeVector2Tests::test_subtract_vector_1");
		FakeVec2f result;
		FakeVec2f::Subtract(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_vector_2()
		{
		FakeVec2f v(25.4f, 64.3f);
		FakeVec2f vOther(5.4f, 4.3f);
		FakeVec2f expected(20.0f, 60.0f);

		FakeTimer timer("FakeVector2Tests::test_subtract_vector_2");
		FakeVec2f result = FakeVec2f::Subtract(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_scalar_1()
		{
		FakeVec2f v(25.4f, 64.3f);
		float value = 5.4f;
		FakeVec2f expected(20.0f, 58.9f);

		FakeTimer timer("FakeVector2Tests::test_subtract_scalar_1");
		FakeVec2f result;
		FakeVec2f::Subtract(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_scalar_2()
		{
		FakeVec2f v(25.4f, 64.3f);
		float value = 5.4f;
		FakeVec2f expected(20.0f, 58.9f);

		FakeTimer timer("FakeVector2Tests::test_subtract_scalar_2");
		FakeVec2f result = FakeVec2f::Subtract(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_vector_operator_1()
		{
		FakeVec2f v(25.4f, 64.3f);
		FakeVec2f vOther(5.4f, 4.3f);
		FakeVec2f expected(20.0f, 60.0f);

		FakeTimer timer("FakeVector2Tests::test_subtract_vector_operator_1");
		FakeVec2f result = v - vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_vector_operator_2()
		{
		FakeVec2f v(25.4f, 64.3f);
		FakeVec2f vOther(5.4f, 4.3f);
		FakeVec2f expected(20.0f, 60.0f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_subtract_vector_operator_2");
		result -= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_scalar_operator_1()
		{
		FakeVec2f v(25.4f, 64.3f);
		float value = 5.4f;
		FakeVec2f expected(20.0f, 58.9f);

		FakeTimer timer("FakeVector2Tests::test_subtract_scalar_operator_1");
		FakeVec2f result = v - value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_subtract_scalar_operator_2()
		{
		FakeVec2f v(25.4f, 64.3f);
		float value = 5.4f;
		FakeVec2f expected(20.0f, 58.9f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_subtract_scalar_operator_2");
		result -= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_one_unit()
		{
		FakeVec2f v(42.5f, 65.2f);
		FakeVec2f expected(41.5f, 64.2f);

		FakeTimer timer("FakeVector2Tests::test_subtract_one_unit");
		v--;
		timer.Stop();

		if (!assert_equal(timer, expected, v))
			return -1;

		return 0;
		}

	int test_subtract_reverse_operator()
		{
		FakeVec2f v(2.0f, 2.5f);
		float value = 0.5f;
		FakeVec2f expected(-1.5f, -2.0f);

		FakeTimer timer("FakeVector2Tests::test_subtract_reverse_operator");
		FakeVec2f result = value - v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
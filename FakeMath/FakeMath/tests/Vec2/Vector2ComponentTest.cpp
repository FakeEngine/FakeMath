#include "Vector2ComponentTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_is_one_true()
		{
		FakeVec2f v(1.0f, 1.0f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_one_true");
		bool result = v.IsOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_one_false()
		{
		FakeVec2f v(12.4f, 32.5f);
		bool expected = false;

		FakeTimer timer("FakeVector2Tests::test_is_one_false");
		bool result = v.IsOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_one_true()
		{
		FakeVec2f v(1.0f, 12.5f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_any_one_true");
		bool result = v.IsAnyOne();
		timer.Stop();
		
		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_is_any_one_false()
		{
		FakeVec2f v(85.6f, 53.2f);
		bool expected = false;

		FakeTimer timer("FakeVector2Tests::test_is_any_one_false");
		bool result = v.IsAnyOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_zero_true()
		{
		FakeVec2f v(0.0f, 0.0f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_any_one_false");
		bool result = v.IsZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}

	int test_is_zero_false()
		{
		FakeVec2f v(21.0f, 12.6f);
		bool expected = false;

		FakeTimer timer("FakeVector2Tests::test_is_zero_false");
		bool result = v.IsZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_zero_true()
		{
		FakeVec2f v(0.0f, 12.6f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_any_zero_true");
		bool result = v.IsAnyZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_zero_false()
		{
		FakeVec2f v(21.5f, 23.6f);
		bool expected = false;

		FakeTimer timer("FakeVector2Tests::test_is_any_zero_false");
		bool result = v.IsAnyZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_absolute_true()
		{
		FakeVec2f v(-21.32f, -100.7f);
		FakeVec2f expected(21.32f, 100.7f);

		FakeTimer timer("FakeVector2Tests::test_absolute_true");
		v.Absolute();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_absolute_false()
		{
		FakeVec2f v(21.32f, 100.7f);
		FakeVec2f expected(21.32f, 100.7f);

		FakeTimer timer("FakeVector2Tests::test_absolute_false");
		v.Absolute();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_negate_true()
		{
		FakeVec2f v(12.4f, 53.7f);
		FakeVec2f expected(-12.4f, -53.7f);

		FakeTimer timer("FakeVector2Tests::test_negate_true");
		v.Negate();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_negate_false()
		{
		FakeVec2f v(-12.4f, -53.7f);
		FakeVec2f expected(12.4f, 53.7f);

		FakeTimer timer("FakeVector2Tests::test_negate_false");
		v.Negate();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_negate_operator()
		{
		FakeVec2f v(-12.4f, -53.7f);
		FakeVec2f expected(12.4f, 53.7f);

		FakeTimer timer("FakeVector2Tests::test_negate_operator");
		v = -v;
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_get_absolute_true()
		{
		FakeVec2f v(-21.32f, -100.7f);
		FakeVec2f expected(21.32f, 100.7f);

		FakeTimer timer("FakeVector2Tests::test_get_absolute_true");
		FakeVec2f result = v.GetAbsolute();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_get_absolute_false()
		{
		FakeVec2f v(21.32f, 100.7f);
		FakeVec2f expected(21.32f, 100.7f);

		FakeTimer timer("FakeVector2Tests::test_get_absolute_false");
		FakeVec2f result = v.GetAbsolute();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_get_negative_true()
		{
		FakeVec2f v(12.4f, 53.7f);
		FakeVec2f expected(-12.4f, -53.7f);

		FakeTimer timer("FakeVector2Tests::test_get_negative_true");
		FakeVec2f result = v.GetNegative();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_get_negative_false()
		{
		FakeVec2f v(-12.4f, -53.7f);
		FakeVec2f expected(12.4f, 53.7f);

		FakeTimer timer("FakeVector2Tests::test_get_negative_false");
		FakeVec2f result = v.GetNegative();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_average_arithmetic()
		{
		FakeVec2f v(4.0f, 8.0f);
		float expected = 6.0f;

		FakeTimer timer("FakeVector2Tests::test_average_arithmetic");
		float result = v.AverageArithmetic();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_min_vector_1()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(6.0f, 9.0f);
		FakeVec2f expected(4.0f, 5.0f);
		FakeVec2f result;

		FakeTimer timer("FakeVector2Tests::test_min_vector_1");
		FakeVec2f::Min(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_min_vector_2()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(6.0f, 9.0f);
		FakeVec2f expected(4.0f, 5.0f);

		FakeTimer timer("FakeVector2Tests::test_min_vector_2");
		FakeVec2f result = FakeVec2f::Min(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_min_value()
		{
		FakeVec2f v(12.4f, 23.7f);
		float exptected = 12.4f;

		FakeTimer timer("FakeVector2Tests::test_min_value");
		float result = v.Min();
		timer.Stop();

		if (!assert_equal(timer, exptected, result))
			return -1;

		return 0;
		}

	int test_max_vector_1()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(6.0f, 9.0f);
		FakeVec2f expected(6.0f, 9.0f);
		FakeVec2f result;

		FakeTimer timer("FakeVector2Tests::test_max_vector_1");
		FakeVec2f::Max(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_max_vector_2()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(6.0f, 9.0f);
		FakeVec2f expected(6.0f, 9.0f);

		FakeTimer timer("FakeVector2Tests::test_max_vector_2");
		FakeVec2f result = FakeVec2f::Max(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_max_value()
		{
		FakeVec2f v(12.4f, 23.7f);
		float exptected = 23.7f;

		FakeTimer timer("FakeVector2Tests::test_max_value");
		float result = v.Max();
		timer.Stop();

		if (!assert_equal(timer, exptected, result))
			return -1;

		return 0;
		}
	
	int test_is_nan()
		{
		FakeVec2f v(NAN);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_nan");
		bool result = v.IsNaN();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_is_infinity()
		{
		FakeVec2f v(INFINITY);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_infinity");
		bool result = v.IsInfinity();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_near_equal()
		{
		FakeVec2f v(21.45f, 32.9f);
		FakeVec2f anotherV(21.45f, 32.9f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_near_equal");
		bool result = FakeVec2f::NearEqual(v, anotherV);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_near_equal_with_epsilon()
		{
		float epsilon = 0.5f;
		FakeVec2f v(21.45f, 32.9f);
		FakeVec2f anotherV(21.9f, 32.5f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_near_equal_with_epsilon");
		bool result = FakeVec2f::NearEqual(v, anotherV, epsilon);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}


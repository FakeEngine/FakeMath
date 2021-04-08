#include "Vector3ComponentTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_is_one_true()
		{
		FakeVec3f v(1.0f, 1.0f, 1.0f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_one_true");
		bool result = v.IsOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_one_false()
		{
		FakeVec3f v(12.4f, 32.5f, 12.5f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_is_one_false");
		bool result = v.IsOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_one_true()
		{
		FakeVec3f v(1.0f, 12.5f, 42.5f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_any_one_true");
		bool result = v.IsAnyOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_one_false()
		{
		FakeVec3f v(85.6f, 53.2f, 1.4f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_is_any_one_false");
		bool result = v.IsAnyOne();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_zero_true()
		{
		FakeVec3f v(0.0f, 0.0f, 0.0f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_any_one_false");
		bool result = v.IsZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_zero_false()
		{
		FakeVec3f v(21.0f, 12.6f, 52.4f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_is_zero_false");
		bool result = v.IsZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_zero_true()
		{
		FakeVec3f v(0.0f, 12.6f, 52.3f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_any_zero_true");
		bool result = v.IsAnyZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_any_zero_false()
		{
		FakeVec3f v(21.5f, 23.6f, 1.2f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_is_any_zero_false");
		bool result = v.IsAnyZero();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_absolute_true()
		{
		FakeVec3f v(-21.32f, -100.7f, 12.3f);
		FakeVec3f expected(21.32f, 100.7f, 12.3f);

		FakeTimer timer("FakeVector3Tests::test_absolute_true");
		v.Absolute();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_absolute_false()
		{
		FakeVec3f v(21.32f, 100.7f, 12.4f);
		FakeVec3f expected(21.32f, 100.7f, 12.4f);

		FakeTimer timer("FakeVector3Tests::test_absolute_false");
		v.Absolute();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_negate_true()
		{
		FakeVec3f v(12.4f, 53.7f, 21.32f);
		FakeVec3f expected(-12.4f, -53.7f, -21.32f);

		FakeTimer timer("FakeVector3Tests::test_negate_true");
		v.Negate();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_negate_false()
		{
		FakeVec3f v(-12.4f, -53.7f, -21.32f);
		FakeVec3f expected(12.4f, 53.7f, 21.32f);

		FakeTimer timer("FakeVector3Tests::test_negate_false");
		v.Negate();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_negate_operator()
		{
		FakeVec3f v(-12.4f, -53.7f, -21.32f);
		FakeVec3f expected(12.4f, 53.7f, 21.32f);

		FakeTimer timer("FakeVector3Tests::test_negate_operator");
		v = -v;
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}


	int test_get_absolute_true()
		{
		FakeVec3f v(-21.32f, -100.7f, -12.4f);
		FakeVec3f expected(21.32f, 100.7f, 12.4f);

		FakeTimer timer("FakeVector3Tests::test_get_absolute_true");
		FakeVec3f result = v.GetAbsolute();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_get_absolute_false()
		{
		FakeVec3f v(21.32f, 100.7f, 12.4f);
		FakeVec3f expected(21.32f, 100.7f, 12.4f);

		FakeTimer timer("FakeVector3Tests::test_get_absolute_false");
		FakeVec3f result = v.GetAbsolute();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_get_negative_true()
		{
		FakeVec3f v(12.4f, 53.7f, 21.3f);
		FakeVec3f expected(-12.4f, -53.7f, -21.3f);

		FakeTimer timer("FakeVector3Tests::test_get_negative_true");
		FakeVec3f result = v.GetNegative();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_get_negative_false()
		{
		FakeVec3f v(-12.4f, -53.7f, -21.3f);
		FakeVec3f expected(12.4f, 53.7f, 21.3f);

		FakeTimer timer("FakeVector3Tests::test_get_negative_false");
		FakeVec3f result = v.GetNegative();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_average_arithmetic()
		{
		FakeVec3f v(4.0f, 4.0f, 4.0f);
		float expected = 4.0f;

		FakeTimer timer("FakeVector3Tests::test_average_arithmetic");
		float result = v.AverageArithmetic();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_min_vector_1()
		{
		FakeVec3f v(4.0f, 5.0f, 1.0f);
		FakeVec3f vOther(6.0f, 9.0f, 12.0f);
		FakeVec3f expected(4.0f, 5.0f, 1.0f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_min_vector_1");
		FakeVec3f::Min(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_min_vector_2()
		{
		FakeVec3f v(4.0f, 5.0f, 1.0f);
		FakeVec3f vOther(6.0f, 9.0f, 12.0f);
		FakeVec3f expected(4.0f, 5.0f, 1.0f);

		FakeTimer timer("FakeVector3Tests::test_min_vector_2");
		FakeVec3f result = FakeVec3f::Min(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_min_value()
		{
		FakeVec3f v(12.4f, 23.7f, 12.5f);
		float exptected = 12.4f;

		FakeTimer timer("FakeVector3Tests::test_min_value");
		float result = v.Min();
		timer.Stop();

		if (!assert_equal(timer, exptected, result))
			return -1;

		return 0;
		}

	int test_max_vector_1()
		{
		FakeVec3f v(4.0f, 5.0f, 1.0f);
		FakeVec3f vOther(6.0f, 9.0f, 12.0f);
		FakeVec3f expected(6.0f, 9.0f, 12.0f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_max_vector_1");
		FakeVec3f::Max(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_max_vector_2()
		{
		FakeVec3f v(4.0f, 5.0f, 1.0f);
		FakeVec3f vOther(6.0f, 9.0f, 12.0f);
		FakeVec3f expected(6.0f, 9.0f, 12.0f);

		FakeTimer timer("FakeVector3Tests::test_max_vector_2");
		FakeVec3f result = FakeVec3f::Max(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_max_value()
		{
		FakeVec3f v(12.4f, 23.7f, 42.0f);
		float exptected = 42.0f;

		FakeTimer timer("FakeVector3Tests::test_max_value");
		float result = v.Max();
		timer.Stop();

		if (!assert_equal(timer, exptected, result))
			return -1;

		return 0;
		}


	int test_is_nan()
		{
		FakeVec3f v(NAN);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_nan");
		bool result = v.IsNaN();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_is_infinity()
		{
		FakeVec3f v(INFINITY);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_infinity");
		bool result = v.IsInfinity();
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_near_equal()
		{
		FakeVec3f v(21.45f, 32.9f, 42.5f);
		FakeVec3f anotherV(21.45f, 32.9f, 42.5f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_near_equal");
		bool result = FakeVec3f::NearEqual(v, anotherV);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_near_equal_with_epsilon()
		{
		float epsilon = 0.5f;
		FakeVec3f v(21.45f, 32.9f, 42.0f);
		FakeVec3f anotherV(21.9f, 32.5f, 42.4f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_near_equal_with_epsilon");
		bool result = FakeVec3f::NearEqual(v, anotherV, epsilon);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
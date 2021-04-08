#include "Vector3SubtractionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_subtract_vector_1()
		{
		FakeVec3f v(25.4f, 64.3f, 100.5f);
		FakeVec3f vOther(5.4f, 4.3f, 50.5f);
		FakeVec3f expected(20.0f, 60.0f, 50.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_vector_1");
		FakeVec3f result;
		FakeVec3f::Subtract(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_vector_2()
		{
		FakeVec3f v(25.4f, 64.3f, 100.5f);
		FakeVec3f vOther(5.4f, 4.3f, 50.5f);
		FakeVec3f expected(20.0f, 60.0f, 50.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_vector_2");
		FakeVec3f result = FakeVec3f::Subtract(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_scalar_1()
		{
		FakeVec3f v(25.4f, 64.3f, 55.4f);
		float value = 5.4f;
		FakeVec3f expected(20.0f, 58.9f, 50.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_scalar_1");
		FakeVec3f result;
		FakeVec3f::Subtract(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_scalar_2()
		{
		FakeVec3f v(25.4f, 64.3f, 55.4f);
		float value = 5.4f;
		FakeVec3f expected(20.0f, 58.9f, 50.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_scalar_2");
		FakeVec3f result = FakeVec3f::Subtract(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_vector_operator_1()
		{
		FakeVec3f v(25.4f, 64.3f, 100.5f);
		FakeVec3f vOther(5.4f, 4.3f, 50.5f);
		FakeVec3f expected(20.0f, 60.0f, 50.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_vector_operator_1");
		FakeVec3f result = v - vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_vector_operator_2()
		{
		FakeVec3f v(25.4f, 64.3f, 100.5f);
		FakeVec3f vOther(5.4f, 4.3f, 50.5f);
		FakeVec3f expected(20.0f, 60.0f, 50.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_subtract_vector_operator_2");
		result -= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_subtract_scalar_operator_1()
		{
		FakeVec3f v(25.4f, 64.3f, 100.4f);
		float value = 5.4f;
		FakeVec3f expected(20.0f, 58.9f, 95.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_scalar_operator_1");
		FakeVec3f result = v - value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_subtract_scalar_operator_2()
		{
		FakeVec3f v(25.4f, 64.3f, 100.4f);
		float value = 5.4f;
		FakeVec3f expected(20.0f, 58.9f, 95.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_subtract_scalar_operator_2");
		result -= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_subtract_one_unit()
		{
		FakeVec3f v(42.5f, 65.2f, 42.5f);
		FakeVec3f expected(41.5f, 64.2f, 41.5f);

		FakeTimer timer("FakeVector3Tests::test_subtract_one_unit");
		v--;
		timer.Stop();

		if (!assert_equal(timer, expected, v))
			return -1;

		return 0;
		}

	int test_subtract_reverse_operator()
		{
		FakeVec3f v(2.0f, 2.5f, 42.5f);
		float value = 0.5f;
		FakeVec3f expected(-1.5f, -2.0f, -42.0f);

		FakeTimer timer("FakeVector3Tests::test_subtract_reverse_operator");
		FakeVec3f result = value - v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
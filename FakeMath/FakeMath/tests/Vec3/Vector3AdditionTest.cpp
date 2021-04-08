#include "Vector3AdditionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_add_vector_1()
		{
		FakeVec3f v(2.0f, 6.3f, 23.1f);
		FakeVec3f vOther(21.5f, 12.6f, 5.2f);
		FakeVec3f expected(23.5f, 18.9f, 28.3f);

		FakeTimer timer("FakeVector3Tests::test_add_vector_1");
		FakeVec3f result;
		FakeVec3f::Add(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_vector_2()
		{
		FakeVec3f v(2.0f, 6.3f, 23.1f);
		FakeVec3f vOther(21.5f, 12.6f, 5.2f);
		FakeVec3f expected(23.5f, 18.9f, 28.3f);

		FakeTimer timer("FakeVector3Tests::test_add_vector_2");
		FakeVec3f result = FakeVec3f::Add(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_scalar_1()
		{
		FakeVec3f v(2.0f, 6.3f, 63.5f);
		float value = 23.5f;
		FakeVec3f expected(25.5f, 29.8f, 87.0f);

		FakeTimer timer("FakeVector3Tests::test_add_scalar_1");
		FakeVec3f result;
		FakeVec3f::Add(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_scalar_2()
		{
		FakeVec3f v(2.0f, 6.3f, 63.5f);
		float value = 23.5f;
		FakeVec3f expected(25.5f, 29.8f, 87.0f);

		FakeTimer timer("FakeVector3Tests::test_add_scalar_2");
		FakeVec3f result = FakeVec3f::Add(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_vector_operator_1()
		{
		FakeVec3f v(2.0f, 6.3f, 8.4f);
		FakeVec3f vOther(21.5f, 12.6f, 1.6f);
		FakeVec3f expected(23.5f, 18.9f, 10.0f);

		FakeTimer timer("FakeVector3Tests::test_add_vector_operator_1");
		FakeVec3f result = v + vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_vector_operator_2()
		{
		FakeVec3f v(2.0f, 6.3f, 8.4f);
		FakeVec3f vOther(21.5f, 12.6f, 1.6f);
		FakeVec3f expected(23.5f, 18.9f, 10.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_add_vector_operator_2");
		result += vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_scalar_operator_1()
		{
		FakeVec3f v(2.0f, 6.3f, 1.5f);
		float value = 23.5f;
		FakeVec3f expected(25.5f, 29.8f, 25.0f);

		FakeTimer timer("FakeVector3Tests::test_add_scalar_operator_1");
		FakeVec3f result = v + value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_scalar_operator_2()
		{
		FakeVec3f v(2.0f, 6.3f, 1.5f);
		float value = 23.5f;
		FakeVec3f expected(25.5f, 29.8f, 25.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_add_scalar_operator_2");
		result += value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_one_unit()
		{
		FakeVec3f v(42.5f, 65.2f, 88.0f);
		FakeVec3f expected(43.5f, 66.2f, 89.0f);

		FakeTimer timer("FakeVector3Tests::test_add_one_unit");
		v++;
		timer.Stop();

		if (!assert_equal(timer, expected, v))
			return -1;

		return 0;
		}

	int test_add_reverse_operator()
		{
		FakeVec3f v(2.0f, 1.5f, 88.0f);
		float value = 0.5f;
		FakeVec3f expected(2.5f, 2.0f, 88.5f);

		FakeTimer timer("FakeVector3Tests::test_add_reverse_operator");
		FakeVec3f result = value + v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
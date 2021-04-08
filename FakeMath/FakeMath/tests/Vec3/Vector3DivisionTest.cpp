#include "Vector3DivisionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_divide_vector_1()
		{
		FakeVec3f v(9.0f, 16.0f, 81.0f);
		FakeVec3f vOther(3.0f, 4.0f, 9.0f);
		FakeVec3f expected(3.0f, 4.0f, 9.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_vector_1");
		FakeVec3f result;
		FakeVec3f::Divide(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_vector_2()
		{
		FakeVec3f v(9.0f, 16.0f, 25.0f);
		FakeVec3f vOther(3.0f, 4.0f, 5.0f);
		FakeVec3f expected(3.0f, 4.0f, 5.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_vector_2");
		FakeVec3f result = FakeVec3f::Divide(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_vector_false()
		{
		FakeVec3f v(9.0f, 16.0f, 25.0f);
		FakeVec3f vOther(0.0f, 0.0f, 0.0f);
		FakeVec3f expected(0.0f, 0.0f, 0.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_vector_false");
		FakeVec3f result = FakeVec3f::Divide(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_divide_scalar_1()
		{
		FakeVec3f v(25.0f, 10.0f, 40.0f);
		float value = 5.0f;
		FakeVec3f expected(5.0f, 2.0f, 8.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_scalar_1");
		FakeVec3f result;
		FakeVec3f::Divide(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_scalar_2()
		{
		FakeVec3f v(25.0f, 10.0f, 40.0f);
		float value = 5.0f;
		FakeVec3f expected(5.0f, 2.0f, 8.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_scalar_2");
		FakeVec3f result = FakeVec3f::Divide(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_scalar_false()
		{
		FakeVec3f v(25.0f, 10.0f, 40.0f);
		float value = 0.0f;
		FakeVec3f expected(0.0f, 0.0f, 0.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_scalar_false");
		FakeVec3f result = FakeVec3f::Divide(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_divide_vector_operator_1()
		{
		FakeVec3f v(9.0f, 16.0f, 25.0f);
		FakeVec3f vOther(3.0f, 4.0f, 5.0f);
		FakeVec3f expected(3.0f, 4.0f, 5.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_vector_operator_1");
		FakeVec3f result = v / vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_vector_operator_2()
		{
		FakeVec3f v(9.0f, 16.0f, 25.0f);
		FakeVec3f vOther(3.0f, 4.0f, 5.0f);
		FakeVec3f expected(3.0f, 4.0f, 5.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_divide_vector_operator_2");
		result /= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_vector_operator_false()
		{
		FakeVec3f v(9.0f, 16.0f, 25.0f);
		FakeVec3f vOther(0.0f, 0.0f, 0.0f);
		FakeVec3f expected(0.0f, 0.0f, 0.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_divide_vector_operator_false");
		result /= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_divide_scalar_operator_1()
		{
		FakeVec3f v(25.0f, 10.0f, 40.0f);
		float value = 5.0f;
		FakeVec3f expected(5.0f, 2.0f, 8.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_scalar_operator_1");
		FakeVec3f result = v / value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_scalar_operator_2()
		{
		FakeVec3f v(25.0f, 10.0f, 40.0f);
		float value = 5.0f;
		FakeVec3f expected(5.0f, 2.0f, 8.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_divide_scalar_operator_2");
		result /= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_scalar_operator_false()
		{
		FakeVec3f v(25.0f, 10.0f, 40.0f);
		float value = 0.0f;
		FakeVec3f expected(0.0f, 0.0f, 0.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_divide_scalar_operator_false");
		result /= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_reverse_operator()
		{
		FakeVec3f v(4.0f, 3.0f, 12.0f);
		float value = 2.0f;
		FakeVec3f expected(0.5f, 0.666667f, 6.0f);

		FakeTimer timer("FakeVector3Tests::test_divide_reverse_operator");
		FakeVec3f result = value / v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
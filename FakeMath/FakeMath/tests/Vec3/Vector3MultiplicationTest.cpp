#include "Vector3MultiplicationTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_multiply_vector_1()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		FakeVec3f vOther(20.0f, 10.0f, 10.0f);
		FakeVec3f expected(80.0f, 50.0f, 20.0f);

		FakeTimer timer("FakeVector3Tests::test_multiply_vector_1");
		FakeVec3f result;
		FakeVec3f::Multiply(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_multiply_vector_2()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		FakeVec3f vOther(20.0f, 10.0f, 10.0f);
		FakeVec3f expected(80.0f, 50.0f, 20.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_vector_2");
		FakeVec3f result = FakeVec3f::Multiply(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_multiply_scalar_1()
		{
		FakeVec3f v(4.0f, 5.0f, 10.0f);
		float value = 50.0f;
		FakeVec3f expected(200.0f, 250.0f, 500.0f);

		FakeTimer timer("FakeVector3Tests::test_multiply_scalar_1");
		FakeVec3f result;
		FakeVec3f::Multiply(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_multiply_scalar_2()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		float value = 50.0f;
		FakeVec3f expected(200.0f, 250.0f, 100.0f);

		FakeTimer timer("FakeVector3Tests::test_multiply_scalar_2");
		FakeVec3f result = FakeVec3f::Multiply(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_multiply_vector_operator_1()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		FakeVec3f vOther(20.0f, 10.0f, 30.0f);
		FakeVec3f expected(80.0f, 50.0f, 60.0f);

		FakeTimer timer("FakeVector3Tests::test_multiply_vector_operator_1");
		FakeVec3f result = v * vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_multiply_vector_operator_2()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		FakeVec3f vOther(20.0f, 10.0f, 10.0f);
		FakeVec3f expected(80.0f, 50.0f, 20.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_multiply_vector_operator_2");
		result *= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_multiply_scalar_operator_1()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		float value = 50.0f;
		FakeVec3f expected(200.0f, 250.0f, 100.0f);

		FakeTimer timer("FakeVector3Tests::test_multiply_scalar_operator_1");
		FakeVec3f result = v * value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_multiply_scalar_operator_2()
		{
		FakeVec3f v(4.0f, 5.0f, 2.0f);
		float value = 50.0f;
		FakeVec3f expected(200.0f, 250.0f, 100.0f);
		FakeVec3f result = v;

		FakeTimer timer("FakeVector3Tests::test_multiply_scalar_operator_2");
		result *= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_multiply_reverse_operator()
		{
		FakeVec3f v(2.0f, 1.5f, 10.0f);
		float value = 2.0f;
		FakeVec3f expected(4.0f, 3.0f, 20.0f);

		FakeTimer timer("FakeVector3Tests::test_multiply_reverse_operator");
		FakeVec3f result = value * v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
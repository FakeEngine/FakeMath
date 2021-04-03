#include "MultiplicationTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_multiply_vector_1()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(20.0f, 10.0f);
		FakeVec2f expected(80.0f, 50.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_vector_1");
		FakeVec2f result;
		FakeVec2f::Multiply(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_vector_2()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(20.0f, 10.0f);
		FakeVec2f expected(80.0f, 50.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_vector_2");
		FakeVec2f result = FakeVec2f::Multiply(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_scalar_1()
		{
		FakeVec2f v(4.0f, 5.0f);
		float value = 50.0f;
		FakeVec2f expected(200.0f, 250.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_scalar_1");
		FakeVec2f result;
		FakeVec2f::Multiply(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_scalar_2()
		{
		FakeVec2f v(4.0f, 5.0f);
		float value = 50.0f;
		FakeVec2f expected(200.0f, 250.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_scalar_2");
		FakeVec2f result = FakeVec2f::Multiply(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_vector_operator_1()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(20.0f, 10.0f);
		FakeVec2f expected(80.0f, 50.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_vector_operator_1");
		FakeVec2f result = v * vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_vector_operator_2()
		{
		FakeVec2f v(4.0f, 5.0f);
		FakeVec2f vOther(20.0f, 10.0f);
		FakeVec2f expected(80.0f, 50.0f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_multiply_vector_operator_2");
		result *= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_scalar_operator_1()
		{
		FakeVec2f v(4.0f, 5.0f);
		float value = 50.0f;
		FakeVec2f expected(200.0f, 250.0f);

		FakeTimer timer("FakeVector2Tests::test_multiply_scalar_operator_1");
		FakeVec2f result = v * value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_multiply_scalar_operator_2()
		{
		FakeVec2f v(4.0f, 5.0f);
		float value = 50.0f;
		FakeVec2f expected(200.0f, 250.0f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_multiply_scalar_operator_2");
		result *= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}

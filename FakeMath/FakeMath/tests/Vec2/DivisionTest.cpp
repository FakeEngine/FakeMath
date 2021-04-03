#include "DivisionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_divide_vector_1()
		{
		FakeVec2f v(9.0f, 16.0f);
		FakeVec2f vOther(3.0f, 4.0f);
		FakeVec2f expected(3.0f, 4.0f);

		FakeTimer timer("FakeVector2Tests::test_divide_vector_1");
		FakeVec2f result;
		FakeVec2f::Divide(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_vector_2()
		{
		FakeVec2f v(9.0f, 16.0f);
		FakeVec2f vOther(3.0f, 4.0f);
		FakeVec2f expected(3.0f, 4.0f);
		
		FakeTimer timer("FakeVector2Tests::test_divide_vector_2");
		FakeVec2f result = FakeVec2f::Divide(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_vector_false()
		{
		FakeVec2f v(9.0f, 16.0f);
		FakeVec2f vOther(0.0f, 0.0f);
		FakeVec2f expected(0.0f, 0.0f);
		
		FakeTimer timer("FakeVector2Tests::test_divide_vector_false");
		FakeVec2f result = FakeVec2f::Divide(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_scalar_1()
		{
		FakeVec2f v(25.0f, 10.0f);
		float value = 5.0f;
		FakeVec2f expected(5.0f, 2.0f);
		
		FakeTimer timer("FakeVector2Tests::test_divide_scalar_1");
		FakeVec2f result;
		FakeVec2f::Divide(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_scalar_2()
		{
		FakeVec2f v(25.0f, 10.0f);
		float value = 5.0f;
		FakeVec2f expected(5.0f, 2.0f);
		
		FakeTimer timer("FakeVector2Tests::test_divide_scalar_2");
		FakeVec2f result = FakeVec2f::Divide(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_scalar_false()
		{
		FakeVec2f v(25.0f, 10.0f);
		float value = 0.0f;
		FakeVec2f expected(0.0f, 0.0f);
		
		FakeTimer timer("FakeVector2Tests::test_divide_scalar_false");
		FakeVec2f result = FakeVec2f::Divide(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_vector_operator_1()
		{
		FakeVec2f v(9.0f, 16.0f);
		FakeVec2f vOther(3.0f, 4.0f);
		FakeVec2f expected(3.0f, 4.0f);

		FakeTimer timer("FakeVector2Tests::test_divide_vector_operator_1");
		FakeVec2f result = v / vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}
	
	int test_divide_vector_operator_2()
		{
		FakeVec2f v(9.0f, 16.0f);
		FakeVec2f vOther(3.0f, 4.0f);
		FakeVec2f expected(3.0f, 4.0f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_divide_vector_operator_2");
		result /= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_vector_operator_false()
		{
		FakeVec2f v(9.0f, 16.0f);
		FakeVec2f vOther(0.0f, 0.0f);
		FakeVec2f expected(0.0f, 0.0f);
		FakeVec2f result = v;
		
		FakeTimer timer("FakeVector2Tests::test_divide_vector_operator_false");
		result /= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_scalar_operator_1()
		{
		FakeVec2f v(25.0f, 10.0f);
		float value = 5.0f;
		FakeVec2f expected(5.0f, 2.0f);

		FakeTimer timer("FakeVector2Tests::test_divide_scalar_operator_1");
		FakeVec2f result = v / value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}
	
	int test_divide_scalar_operator_2()
		{
		FakeVec2f v(25.0f, 10.0f);
		float value = 5.0f;
		FakeVec2f expected(5.0f, 2.0f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_divide_scalar_operator_2");
		result /= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_divide_scalar_operator_false()
		{
		FakeVec2f v(25.0f, 10.0f);
		float value = 0.0f;
		FakeVec2f expected(0.0f, 0.0f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_divide_scalar_operator_false");
		result /= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_divide_reverse_operator()
		{
		FakeVec2f v(4.0f, 3.0f);
		float value = 2.0f;
		FakeVec2f expected(0.5f, 0.666667f);

		FakeTimer timer("FakeVector2Tests::test_divide_reverse_operator");
		FakeVec2f result = value / v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}

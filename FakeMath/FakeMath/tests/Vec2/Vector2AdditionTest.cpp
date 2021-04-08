#include "Vector2AdditionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_add_vector_1()
		{
		FakeVec2f v(2.0f, 6.3f);
		FakeVec2f vOther(21.5f, 12.6f);
		FakeVec2f expected(23.5f, 18.9f);

		FakeTimer timer("FakeVector2Tests::test_add_vector_1");
		FakeVec2f result;
		FakeVec2f::Add(v, vOther, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_vector_2()
		{
		FakeVec2f v(2.0f, 6.3f);
		FakeVec2f vOther(21.5f, 12.6f);
		FakeVec2f expected(23.5f, 18.9f);

		FakeTimer timer("FakeVector2Tests::test_add_vector_2");
		FakeVec2f result = FakeVec2f::Add(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_add_scalar_1()
		{
		FakeVec2f v(2.0f, 6.3f);
		float value = 23.5f;
		FakeVec2f expected(25.5f, 29.8f);

		FakeTimer timer("FakeVector2Tests::test_add_scalar_1");
		FakeVec2f result;
		FakeVec2f::Add(v, value, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_add_scalar_2()
		{
		FakeVec2f v(2.0f, 6.3f);
		float value = 23.5f;
		FakeVec2f expected(25.5f, 29.8f);

		FakeTimer timer("FakeVector2Tests::test_add_scalar_2");
		FakeVec2f result = FakeVec2f::Add(v, value);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_vector_operator_1()
		{
		FakeVec2f v(2.0f, 6.3f);
		FakeVec2f vOther(21.5f, 12.6f);
		FakeVec2f expected(23.5f, 18.9f);

		FakeTimer timer("FakeVector2Tests::test_add_vector_operator_1");
		FakeVec2f result = v + vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_add_vector_operator_2()
		{
		FakeVec2f v(2.0f, 6.3f);
		FakeVec2f vOther(21.5f, 12.6f);
		FakeVec2f expected(23.5f, 18.9f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_add_vector_operator_2");
		result += vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_add_scalar_operator_1()
		{
		FakeVec2f v(2.0f, 6.3f);
		float value = 23.5f;
		FakeVec2f expected(25.5f, 29.8f);

		FakeTimer timer("FakeVector2Tests::test_add_scalar_operator_1");
		FakeVec2f result = v + value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_add_scalar_operator_2()
		{
		FakeVec2f v(2.0f, 6.3f);
		float value = 23.5f;
		FakeVec2f expected(25.5f, 29.8f);
		FakeVec2f result = v;

		FakeTimer timer("FakeVector2Tests::test_add_scalar_operator_2");
		result += value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_add_one_unit()
		{
		FakeVec2f v(42.5f, 65.2f);
		FakeVec2f expected(43.5f, 66.2f);

		FakeTimer timer("FakeVector2Tests::test_add_one_unit");
		v++;
		timer.Stop();

		if (!assert_equal(timer, expected, v))
			return -1;

		return 0;
		}

	int test_add_reverse_operator()
		{
		FakeVec2f v(2.0f, 1.5f);
		float value = 0.5f;
		FakeVec2f expected(2.5f, 2.0f);

		FakeTimer timer("FakeVector2Tests::test_add_reverse_operator");
		FakeVec2f result = value + v;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}

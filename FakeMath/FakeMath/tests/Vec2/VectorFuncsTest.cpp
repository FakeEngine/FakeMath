#include "VectorFuncsTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_floor()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f expected(2.0f, 12.0f);

		FakeTimer timer("FakeVector2Tests::test_floor");
		FakeVec2f result = FakeVec2f::Floor(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_round()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f expected(2.0f, 13.0f);

		FakeTimer timer("FakeVector2Tests::test_round");
		FakeVec2f result = FakeVec2f::Round(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_ceil()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f expected(3.0f, 13.0f);

		FakeTimer timer("FakeVector2Tests::test_ceil");
		FakeVec2f result = FakeVec2f::Ceil(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_frac()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f expected(0.4f, 0.5f);

		FakeTimer timer("FakeVector2Tests::test_frac");
		FakeVec2f result = FakeVec2f::Frac(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_clamp_1()
		{
		FakeVec2f v(2.1f, 6.3f);
		FakeVec2f min(2.5f);
		FakeVec2f max(6.5f);
		FakeVec2f expected(2.5f, 6.3f);
		FakeVec2f result;

		FakeTimer timer("FakeVector2Tests::test_clamp_1");
		FakeVec2f::Clamp(v, min, max, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_clamp_2()
		{
		FakeVec2f v(2.1f, 6.3f);
		FakeVec2f min(2.5f);
		FakeVec2f max(6.5f);
		FakeVec2f expected(2.5f, 6.3f);

		FakeTimer timer("FakeVector2Tests::test_clamp_2");
		FakeVec2f result = FakeVec2f::Clamp(v, min, max);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}
	
	int test_distance()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f vOther(3.0f, 15.0f);
		float expected = 2.57099f;

		FakeTimer timer("FakeVector2Tests::test_distance");
		float result = FakeVec2f::Distance(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_distance_squared()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f vOther(3.0f, 15.0f);
		float expected = 6.61f;

		FakeTimer timer("FakeVector2Tests::test_distance_squared");
		float result = FakeVec2f::DistanceSquared(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_dot()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f vOther(3.0f, 15.0f);
		float expected = 194.7f;

		FakeTimer timer("FakeVector2Tests::test_dot");
		float result = FakeVec2f::Dot(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_dot_operator()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f vOther(3.0f, 15.0f);
		float expected = 194.7f;

		FakeTimer timer("FakeVector2Tests::test_dot_operator");
		FakeVec2f result = v | vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;
		
		return 0;
		}
	
	int test_cross()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f vOther(3.0f, 15.0f);
		float expected = -180.3f;

		FakeTimer timer("FakeVector2Tests::test_cross");
		float result = FakeVec2f::Cross(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_cross_operator()
		{
		FakeVec2f v(2.4f, 12.5f);
		FakeVec2f vOther(3.0f, 15.0f);
		float expected = -180.3f;
		
		FakeTimer timer("FakeVector2Tests::test_cross_operator");
		float result = v ^ vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_lerp_1()
		{
		FakeVec2f start(2.4f, 12.5f);
		FakeVec2f end(3.0f, 15.0f);
		float amount = 10.0f;
		FakeVec2f expected(8.4f, 37.5f);
		FakeVec2f result;

		FakeTimer timer("FakeVector2Tests::test_lerp_1");
		FakeVec2f::Lerp(start, end, amount, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_lerp_2()
		{
		FakeVec2f start(2.4f, 12.5f);
		FakeVec2f end(3.0f, 15.0f);
		float amount = 10.0f;
		FakeVec2f expected(8.4f, 37.5f);

		FakeTimer timer("FakeVector2Tests::test_lerp_2");
		FakeVec2f result = FakeVec2f::Lerp(start, end, amount);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}

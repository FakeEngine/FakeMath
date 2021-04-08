#include "Vector2NormalizationTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_normalize()
		{
		FakeVec2f v(232.3f, 234.0f); //                X                inverse length								  Y              inverse length
		FakeVec2f expected(0.704518f, 0.709674f); // 232.3 * (1 / (232.3 * 232.3 + 234.0 * 234.0)) = 0.00213669533, 234.0 * (1 / (232.3 * 232.3 + 234.0 * 234.0)) = 0.00215371248

		FakeTimer timer("FakeVector2Tests::test_normalize");
		v.Normalize();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_normalize_fast()
		{
		FakeVec2f v(232.3f, 234.0f);
		FakeVec2f expected(0.704518f, 0.709674f);

		FakeTimer timer("FakeVector2Tests::test_normalize_fast");
		v.NormalizeFast();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_get_normalized_value()
		{
		FakeVec2f v(232.3f, 234.0f);
		FakeVec2f expected(0.704518f, 0.709674f);

		FakeTimer timer("FakeVector2Tests::test_get_normalized_value");
		FakeVec2f result = v.GetNormalized();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}

	int test_is_normalized_true()
		{
		FakeVec2f v(0.704518f, 0.709674f);
		bool expected = true;

		FakeTimer timer("FakeVector2Tests::test_is_normalized_true");
		bool result = v.IsNormalized();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}

	int test_is_normalized_false()
		{
		FakeVec2f v(232.3f, 234.0f);
		bool expected = false;

		FakeTimer timer("FakeVector2Tests::test_is_normalized_false");
		bool result = v.IsNormalized();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}
	}


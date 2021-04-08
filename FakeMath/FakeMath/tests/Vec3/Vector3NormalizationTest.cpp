#include "Vector3NormalizationTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_normalize()
		{
		FakeVec3f v(232.3f, 234.0f, 20.5f); //                X                inverse length								  Y              inverse length
		FakeVec3f expected(0.704518f, 0.709674f, 0.0f); // 232.3 * (1 / (232.3 * 232.3 + 234.0 * 234.0 + 20.5 * 20.5)) = 0.00213669533, 234.0 * (1 / (232.3 * 232.3 + 234.0 * 234.0 + 20.5 * 20.5)) = 0.00215371248, 20.5 * (1 / (232.3 * 232.3 + 234.0 * 234.0 + 20.5 * 20.5)) = 

		FakeTimer timer("FakeVector3Tests::test_normalize");
		v.Normalize();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_normalize_fast()
		{
		FakeVec3f v(232.3f, 234.0f, 0.0f);
		FakeVec3f expected(0.704518f, 0.709674f, 0.0f);

		FakeTimer timer("FakeVector3Tests::test_normalize_fast");
		v.NormalizeFast();
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}

	int test_get_normalized_value()
		{
		FakeVec3f v(232.3f, 234.0f, 0.0f);
		FakeVec3f expected(0.704518f, 0.709674f, 0.0f);

		FakeTimer timer("FakeVector3Tests::test_get_normalized_value");
		FakeVec3f result = v.GetNormalized();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}

	int test_is_normalized_true()
		{
		FakeVec3f v(0.704518f, 0.709674f, 0.0f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_is_normalized_true");
		bool result = v.IsNormalized();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}

	int test_is_normalized_false()
		{
		FakeVec3f v(232.3f, 234.0f, 0.0f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_is_normalized_false");
		bool result = v.IsNormalized();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}
	}
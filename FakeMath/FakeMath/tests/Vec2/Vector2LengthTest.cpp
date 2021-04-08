#include "Vector2LengthTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_length()
		{
		FakeVec2f v(32.0f, 23.0f);
		float expectedLength = 39.4081f; // sqrt(32 * 32 + 23 * 23) -> sqrt(1553) -> 39.40812099047606

		FakeTimer timer("FakeVector2Tests::test_length");
		float result = v.Length();
		timer.Stop();

		if (!assert_equal(timer, result, expectedLength))
			return -1;

		return 0;
		}

	int test_squared_length()
		{
		FakeVec2f v(12.0f, 21.4f);
		float expectedLength = 601.96f; // 12 * 12 + 21,4 * 21,4 -> 601,96

		FakeTimer timer("FakeVector2Tests::test_squared_length");
		float result = v.LengthSquared();
		timer.Stop();

		if (!assert_equal(timer, result, expectedLength))
			return -1;

		return 0;
		}
	
	int test_inverse_length()
		{
		FakeVec2f v(58.3f, 25.6f);
		float expectedLength = 0.0157052f; // 1 / (58,3 * 58,3 + 25,6 * 25,6) -> 1 / (3.398,89 + 655,36) -> 1 / 4.054,25 -> 2,466547450206573e-4

		FakeTimer timer("FakeVector2Tests::test_inverse_length");
		float result = v.InverseLength();
		timer.Stop();

		if (!assert_equal(timer, result, expectedLength))
			return -1;

		return 0;
		}
	}
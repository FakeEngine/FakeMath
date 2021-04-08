#include "Vector3LengthTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_length()
		{
		FakeVec3f v(32.0f, 23.0f, 20.0f);
		float expectedLength = 44.1928f; // sqrt((32 * 32) + (23 * 23) + (20 * 20)) -> sqrt(482.020) -> 694,2766019390255

		FakeTimer timer("FakeVector3Tests::test_length");
		float result = v.Length();
		timer.Stop();

		if (!assert_equal(timer, result, expectedLength))
			return -1;

		return 0;
		}

	int test_squared_length()
		{
		FakeVec3f v(12.0f, 21.4f, 20.0f);
		float expectedLength = 1001.96f; // (12 * 12) + (21,4 * 21,4) + (20 * 20) -> 1001.96

		FakeTimer timer("FakeVector3Tests::test_squared_length");
		float result = v.LengthSquared();
		timer.Stop();

		if (!assert_equal(timer, result, expectedLength))
			return -1;

		return 0;
		}

	int test_inverse_length()
		{
		FakeVec3f v(58.3f, 25.6f, 2.0f);
		float expectedLength = 0.0156975f; // 1 / ((58,3 * 58,3) + (25,6 * 25,6) + (2 * 2)) -> 1 / (3.398,89 + 655,36 + 4) -> 1 / 6020.33 -> 1,6610385145000357123280617507678e-4

		FakeTimer timer("FakeVector3Tests::test_inverse_length");
		float result = v.InverseLength();
		timer.Stop();

		if (!assert_equal(timer, result, expectedLength))
			return -1;

		return 0;
		}
	}
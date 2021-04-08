#include "Vector3ToStringTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_to_string_1()
		{
		FakeVec3f v(2.2f, 2.4f, 2.76f);
		FakeString expected = "2.2, 2.4, 2.76";

		FakeTimer timer("FakeVector3Tests::test_to_string_1");
		FakeString result = v.ToString();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}

	int test_to_string_2()
		{
		FakeVec3f v(2.0f, 2.0f, 3.0f);
		FakeString expected = "2, 2, 3";

		FakeTimer timer("FakeVector3Tests::test_to_string_2");
		FakeString result = v.ToString();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}
	}
#include "ToStringTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_to_string_1()
		{
		FakeVec2f v(2.2f, 2.4f);
		FakeString expected = "2.2, 2.4";

		FakeTimer timer("FakeVector2Tests::test_to_string_1");
		FakeString result = v.ToString();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}

	int test_to_string_2()
		{
		FakeVec2f v(2.0f, 2.0f);
		FakeString expected = "2, 2";

		FakeTimer timer("FakeVector2Tests::test_to_string_2");
		FakeString result = v.ToString();
		timer.Stop();

		if (!assert_equal(timer, result, expected))
			return -1;

		return 0;
		}


	}

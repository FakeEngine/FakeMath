#include "Vector2UnionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_union()
		{
		float expectedX = 2.2f;
		float expectedY = 2.4f;

		FakeTimer timer("FakeVector2Tests::test_union");
		FakeVec2f v(2.2f, 2.4f);
		float x = v.Raw[0];
		float y = v.Raw[1];
		timer.Stop();

		if (!assert_equal(timer, expectedX, x) && !assert_equal(timer, expectedY, y))
			return -1;

		return 0;
		}
	}
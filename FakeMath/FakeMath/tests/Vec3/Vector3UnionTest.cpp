#include "Vector3UnionTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_union()
		{
		float expectedX = 2.2f;
		float expectedY = 2.4f;
		float expectedZ = 32.1f;

		FakeTimer timer("FakeVector3Tests::test_union");
		FakeVec3f v(2.2f, 2.4f, 32.1f);
		float x = v.Raw[0];
		float y = v.Raw[1];
		float z = v.Raw[2];
		timer.Stop();

		if (!assert_equal(timer, expectedX, x) && !assert_equal(timer, expectedY, y) && !assert_equal(timer, expectedZ, z))
			return -1;

		return 0;
		}
	}
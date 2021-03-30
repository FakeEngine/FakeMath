#include "NormalizationTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector2Tests
	{
	int test_normalize()
		{
		FakeVec2f v(232.3f, 234.0f); //                          X                inverse length                Y                inverse length
		FakeVec2f expected(0.00213669533f, 0.00215371248f); // 232.3 * (1 / (232.3 * 232.3 + 234.0 * 234.0)), 234.0 * (1 / (232.3 * 232.3 + 234.0 * 234.0))

		FakeTimer timer("FakeVector2Tests::test_normalize");
		v.Normalize();
		std::cout << v.ToString() << std::endl;
		timer.Stop();

		if (!assert_equal(timer, v, expected))
			return -1;

		return 0;
		}


	}
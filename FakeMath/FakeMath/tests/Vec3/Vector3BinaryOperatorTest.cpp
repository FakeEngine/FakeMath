#include "Vector3BinaryOperatorTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_vector_equals_vector_true()
		{
		FakeVec3f v(2.0f, 2.6f, 10.2f);
		FakeVec3f vOther(2.0f, 2.6f, 10.2f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_vector_true");
		bool result = v == vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_equals_vector_false()
		{
		FakeVec3f v(2.0f, 2.6f, 10.2f);
		FakeVec3f vOther(2.5f, 2.0f, 12.5f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_vector_false");
		bool result = v == vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_equals_number_true()
		{
		FakeVec3f v(2.0f, 2.0f, 2.0f);
		float value = 2.0f;
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_number_true");
		bool result = v == value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_equals_number_false()
		{
		FakeVec3f v(2.0f, 2.0f, 2.0f);
		float value = 2.5f;
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_number_false");
		bool result = v == value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_vector_equals_not_vector_true()
		{
		FakeVec3f v(2.0f, 2.0f, 2.0f);
		FakeVec3f vOther(2.5f, 2.0f, 2.1f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_not_vector_true");
		bool result = v != vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_equals_not_vector_false()
		{
		FakeVec3f v(2.0f, 2.0f, 2.0f);
		FakeVec3f vOther(2.0f, 2.0f, 2.0f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_not_vector_false");
		bool result = v != vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_equals_not_number_true()
		{
		FakeVec3f v(2.0f, 2.0f, 2.0f);
		float value = 2.5f;
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_not_number_true");
		bool result = v != value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_equals_not_number_false()
		{
		FakeVec3f v(2.0f, 2.0f, 2.0f);
		float value = 2.0f;
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_equals_not_number_false");
		bool result = v != value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_vector_less_vector_true()
		{
		FakeVec3f v(2.0f, 2.1f, 12.4f);
		FakeVec3f vOther(3.0f, 2.9f, 42.2f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_less_vector_true");
		bool result = v < vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_less_vector_false()
		{
		FakeVec3f v(2.0f, 2.1f, 2.5f);
		FakeVec3f vOther(1.0f, 1.9f, 1.2f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_less_vector_false");
		bool result = v < vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_less_number_true()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		float value = 4.0f;
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_less_number_true");
		bool result = v < value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_less_number_false()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		float value = 1.0f;
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_less_number_false");
		bool result = v < value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_vector_less_equal_vector_true()
		{
		FakeVec3f v(2.0f, 2.1f, 2.1f);
		FakeVec3f vOther(2.5f, 2.1f, 2.5f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_less_equal_vector_true");
		bool result = v <= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_less_equal_vector_false()
		{
		FakeVec3f v(2.0f, 2.1f, 2.5f);
		FakeVec3f vOther(1.5f, 1.1f, 1.5f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_less_equal_vector_false");
		bool result = v <= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_less_equal_number_true()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		float value = 2.1f;
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_less_equal_number_true");
		bool result = v <= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_less_equal_number_false()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		float value = 1.0f;
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_less_equal_number_false");
		bool result = v <= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_vector_true()
		{
		FakeVec3f v(2.0f, 2.1f, 2.5f);
		FakeVec3f vOther(1.0f, 1.5f, 1.2f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_vector_true");
		bool result = v > vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_vector_false()
		{
		FakeVec3f v(2.0f, 2.1f, 2.5f);
		FakeVec3f vOther(2.4f, 1.5f, 1.2f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_vector_false");
		bool result = v > vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_number_true()
		{
		FakeVec3f v(2.0f, 2.1f, 1.2f);
		float value = 1.0f;
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_number_true");
		bool result = v > value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_number_false()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		float value = 5.0f;
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_number_false");
		bool result = v > value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_vector_greater_equal_vector_true()
		{
		FakeVec3f v(2.0f, 2.1f, 2.2f);
		FakeVec3f vOther(2.0f, 2.0f, 2.1f);
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_equal_vector_true");
		bool result = v >= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_equal_vector_false()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		FakeVec3f vOther(2.4f, 2.5f, 3.0f);
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_equal_vector_false");
		bool result = v >= vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_equal_number_true()
		{
		FakeVec3f v(2.0f, 2.1f, 2.5f);
		float value = 2.0f;
		bool expected = true;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_equal_number_true");
		bool result = v >= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_vector_greater_equal_number_false()
		{
		FakeVec3f v(2.0f, 2.1f, 1.3f);
		float value = 2.5f;
		bool expected = false;

		FakeTimer timer("FakeVector3Tests::test_vector_greater_equal_number_false");
		bool result = v >= value;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_pointer_access()
		{
		FakeVec3f v(2.0f, 2.1f, 1.5f);
		float expected = 2.0f;

		FakeTimer timer("FakeVector3Tests::test_pointer_access");
		float *result = *v;
		timer.Stop();

		if (!assert_equal(timer, expected, *result))
			return -1;

		return 0;
		}

	int test_array_access()
		{
		FakeVec3f v(2.0f, 2.1f, 1.6f);
		float expected = 2.0f;

		FakeTimer timer("FakeVector3Tests::test_array_access_first_element");
		float result = v[0];
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		expected = 2.1f;
		timer.Start("FakeVector3Tests::test_array_access_second_element");
		result = v[1];
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		expected = 1.6f;
		timer.Start("FakeVector3Tests::test_array_access_third_element");
		result = v[2];
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		expected = -1.0f;
		timer.Start("FakeVector3Tests::test_array_access_false_element");
		result = v[3];
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
#include "Vector3VectorFuncsTest.h"
#include "../../src/Core/Test.h"

namespace FakeVector3Tests
	{
	int test_floor()
		{
		FakeVec3f v(2.4f, 12.5f, 16.3f);
		FakeVec3f expected(2.0f, 12.0f, 16.0f);

		FakeTimer timer("FakeVector3Tests::test_floor");
		FakeVec3f result = FakeVec3f::Floor(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_round()
		{
		FakeVec3f v(2.4f, 12.5f, 42.5f);
		FakeVec3f expected(2.0f, 13.0f, 43.0f);

		FakeTimer timer("FakeVector3Tests::test_round");
		FakeVec3f result = FakeVec3f::Round(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_ceil()
		{
		FakeVec3f v(2.4f, 12.5f, 42.5f);
		FakeVec3f expected(3.0f, 13.0f, 43.0f);

		FakeTimer timer("FakeVector3Tests::test_ceil");
		FakeVec3f result = FakeVec3f::Ceil(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_frac()
		{
		FakeVec3f v(2.4f, 12.5f, 12.8f);
		FakeVec3f expected(0.4f, 0.5f, 0.8f);

		FakeTimer timer("FakeVector3Tests::test_frac");
		FakeVec3f result = FakeVec3f::Frac(v);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}


	int test_clamp_1()
		{
		FakeVec3f v(2.1f, 6.3f, 53.2f);
		FakeVec3f min(2.5f);
		FakeVec3f max(6.5f);
		FakeVec3f expected(2.5f, 6.3f, 6.5f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_clamp_1");
		FakeVec3f::Clamp(v, min, max, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_clamp_2()
		{
		FakeVec3f v(2.1f, 6.3f, 53.2f);
		FakeVec3f min(2.5f);
		FakeVec3f max(6.5f);
		FakeVec3f expected(2.5f, 6.3f, 6.5f);

		FakeTimer timer("FakeVector3Tests::test_clamp_2");
		FakeVec3f result = FakeVec3f::Clamp(v, min, max);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_distance()
		{
		FakeVec3f v(2.4f, 12.5f, 42.8f);
		FakeVec3f vOther(3.0f, 15.0f, 21.5f);
		float expected = 21.4546f;

		FakeTimer timer("FakeVector3Tests::test_distance");
		float result = FakeVec3f::Distance(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_distance_squared()
		{
		FakeVec3f v(2.4f, 12.5f, 42.8f);
		FakeVec3f vOther(3.0f, 15.0f, 21.5f);
		float expected = 460.29986116f;

		FakeTimer timer("FakeVector3Tests::test_distance_squared");
		float result = FakeVec3f::DistanceSquared(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_dot()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f vOther(3.0f, 15.0f, 7.0f);
		float expected = 347.3f;

		FakeTimer timer("FakeVector3Tests::test_dot");
		float result = FakeVec3f::Dot(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_dot_operator()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f vOther(3.0f, 15.0f, 7.0f);
		float expected = 347.3f;

		FakeTimer timer("FakeVector3Tests::test_dot_operator");
		FakeVec3f result = v | vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_cross()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f vOther(3.0f, 15.0f, 7.0f);
		FakeVec3f expected(-239.5f, 48.6f, -1.5f);

		FakeTimer timer("FakeVector3Tests::test_cross");
		FakeVec3f result = FakeVec3f::Cross(v, vOther);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_cross_operator()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f vOther(3.0f, 15.0f, 7.0f);
		FakeVec3f expected(-239.5f, 48.6f, -1.5f);

		FakeTimer timer("FakeVector3Tests::test_cross_operator");
		FakeVec3f result = v ^ vOther;
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_lerp_1()
		{
		FakeVec3f start(2.4f, 12.5f, 21.8f);
		FakeVec3f end(3.0f, 15.0f, 7.0f);
		float amount = 10.0f;
		FakeVec3f expected(8.4f, 37.5f, -126.2f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_lerp_1");
		FakeVec3f::Lerp(start, end, amount, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_lerp_2()
		{
		FakeVec3f start(2.4f, 12.5f, 21.8f);
		FakeVec3f end(3.0f, 15.0f, 7.0f);
		float amount = 10.0f;
		FakeVec3f expected(8.4f, 37.5f, -126.2f);

		FakeTimer timer("FakeVector3Tests::test_lerp_2");
		FakeVec3f result = FakeVec3f::Lerp(start, end, amount);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_smooth_step_1()
		{
		FakeVec3f start(2.4f, 12.5f, 21.8f);
		FakeVec3f end(3.0f, 15.0f, 7.0f);
		float amount = 10.0f;
		FakeVec3f expected(3.0f, 15.0f, 7.0f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_smooth_step_1");
		FakeVec3f::SmoothStep(start, end, amount, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_smooth_step_2()
		{
		FakeVec3f start(2.4f, 12.5f, 21.8f);
		FakeVec3f end(3.0f, 15.0f, 7.0f);
		float amount = 10.0f;
		FakeVec3f expected(3.0f, 15.0f, 7.0f);

		FakeTimer timer("FakeVector3Tests::test_smooth_step_2");
		FakeVec3f result = FakeVec3f::SmoothStep(start, end, amount);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_hermite_1()
		{
		FakeVec3f v1(2.4f, 12.5f, 21.8f);
		FakeVec3f v2(3.0f, 15.0f, 7.0f);
		FakeVec3f tangent1(53.1f, 24.1f, 12.5f);
		FakeVec3f tangent2(1.4f, 1.8f, 12.5f);
		FakeVec3f expected(43253.4f, 16903.5f, 46556.8f);
		FakeVec3f result;
		float amount = 10.0f;

		FakeTimer timer("FakeVector3Tests::test_hermite_1");
		FakeVec3f::Hermite(v1, v2, tangent1, tangent2, amount, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_hermite_2()
		{
		FakeVec3f v1(2.4f, 12.5f, 21.8f);
		FakeVec3f v2(3.0f, 15.0f, 7.0f);
		FakeVec3f tangent1(53.1f, 24.1f, 12.5f);
		FakeVec3f tangent2(1.4f, 1.8f, 12.5f);
		FakeVec3f expected(43253.4f, 16903.5f, 46556.8f);
		float amount = 10.0f;

		FakeTimer timer("FakeVector3Tests::test_hermite_2");
		FakeVec3f result = FakeVec3f::Hermite(v1, v2, tangent1, tangent2, amount);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;

		return 0;
		}
	
	int test_reflect_1()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f normal(3.0f, 15.0f, 7.0f);
		FakeVec3f expected(-2081.4f, -10406.5f, -4840.4f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_reflect_1");
		FakeVec3f::Reflect(v, normal, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_reflect_2()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f normal(3.0f, 15.0f, 7.0f);
		FakeVec3f expected(-2081.4f, -10406.5f, -4840.4f);

		FakeTimer timer("FakeVector3Tests::test_reflect_2");
		FakeVec3f result = FakeVec3f::Reflect(v, normal);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_quaternion_1()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeQuatf quat(3.0f, 15.0f, 7.0f, 5.1f);
		FakeVec3f expected(3170.7f, 2860.78f, -7439.5f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_transform_quaternion_1");
		FakeVec3f::Transform(v, quat, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_quaternion_2()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeQuatf quat(3.0f, 15.0f, 7.0f, 5.1f);
		FakeVec3f expected(3170.7f, 2860.78f, -7439.5f);

		FakeTimer timer("FakeVector3Tests::test_transform_quaternion_2");
		FakeVec3f result = FakeVec3f::Transform(v, quat);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_matrix_1()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeMat4f matrix({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(717.13f, 1059.21f, 132.72f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_transform_matrix_1");
		FakeVec3f::Transform(v, matrix, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_matrix_2()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeMat4f matrix({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(717.13f, 1059.21f, 132.72f);

		FakeTimer timer("FakeVector3Tests::test_transform_matrix_2");
		FakeVec3f result = FakeVec3f::Transform(v, matrix);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_coordinate_1()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeMat4f matrix({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(0.611317f, 0.902923f, 0.113137f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_transform_coordinate_1");
		FakeVec3f::TransformCoordinate(v, matrix, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_coordinate_2()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeMat4f matrix({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(0.611317f, 0.902923f, 0.113137f);

		FakeTimer timer("FakeVector3Tests::test_transform_coordinate_2");
		FakeVec3f result = FakeVec3f::TransformCoordinate(v, matrix);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_normal_1()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeMat4f matrix({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(714.13f, 1056.81f, 89.12f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_transform_normal_1");
		FakeVec3f::TransformNormal(v, matrix, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_transform_normal_2()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeMat4f matrix({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(714.13f, 1056.81f, 89.12f);

		FakeTimer timer("FakeVector3Tests::test_transform_normal_2");
		FakeVec3f result = FakeVec3f::TransformNormal(v, matrix);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_project_1()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f normal(32.9f, 21.5f, 12.5f);
		FakeVec3f expected(11.9965f, 7.83964f, 4.55793f);

		FakeTimer timer("FakeVector3Tests::test_project_1");
		FakeVec3f result = FakeVec3f::Project(v, normal);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_project_2()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		float x = 10.0f;
		float y = 2.0f;
		float width = 1280.0f;
		float height = 720.0f;
		float minZ = -1.0f;
		float maxZ = 1.0f;
		FakeMat4f worldViewProjection({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(1041.24f, 36.9477f, -0.773726f);
		FakeVec3f result;

		FakeTimer timer("FakeVector3Tests::test_project_2");
		FakeVec3f::Project(v, x, y, width, height, minZ, maxZ, worldViewProjection, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_project_3()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		float x = 10.0f;
		float y = 2.0f;
		float width = 1280.0f;
		float height = 720.0f;
		float minZ = -1.0f;
		float maxZ = 1.0f;
		FakeMat4f worldViewProjection({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(1041.24f, 36.9477f, -0.773726f);

		FakeTimer timer("FakeVector3Tests::test_project_3");
		FakeVec3f result = FakeVec3f::Project(v, x, y, width, height, minZ, maxZ, worldViewProjection);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}

	int test_project_on_plane()
		{
		FakeVec3f v(2.4f, 12.5f, 21.8f);
		FakeVec3f planeNormal(3.0f, 15.0f, 7.0f);
		FakeVec3f expected(-1.28163f, -5.90813f, 13.2095f);

		FakeTimer timer("FakeVector3Tests::test_project_on_plane");
		FakeVec3f result = FakeVec3f::ProjectOnPlane(v, planeNormal);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_unproject_1()
		{
		FakeVec3f v(1041.24f, 36.9477f, -0.773726f);
		float x = 10.0f;
		float y = 2.0f;
		float width = 1280.0f;
		float height = 720.0f;
		float minZ = -1.0f;
		float maxZ = 1.0f;
		FakeMat4f worldViewProjection({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(2.4f, 12.5f, 21.8f);
		FakeVec3f result;
		
		FakeTimer timer("FakeVector3Tests::test_unproject_1");
		FakeVec3f::Unproject(v, x, y, width, height, minZ, maxZ, worldViewProjection, result);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_unproject_2()
		{
		FakeVec3f v(1041.24f, 36.9477f, -0.773726f);
		float x = 10.0f;
		float y = 2.0f;
		float width = 1280.0f;
		float height = 720.0f;
		float minZ = -1.0f;
		float maxZ = 1.0f;
		FakeMat4f worldViewProjection({ 3.0f, 15.0f, 7.0f, 5.1f }, { 21.5f, 35.1f, 1.6f, 12.5f }, { 20.1f, 26.7f, 2.4f, 45.0f }, { 3.0f, 2.4f, 43.6f, 23.6f });
		FakeVec3f expected(2.4f, 12.5f, 21.8f);

		FakeTimer timer("FakeVector3Tests::test_unproject_2");
		FakeVec3f result = FakeVec3f::Unproject(v, x, y, width, height, minZ, maxZ, worldViewProjection);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	
	int test_create_ortho_normal_basis()
		{
		FakeVec3f xAxis(2.4f, 12.5f, 21.8f);
		FakeVec3f yAxis(1041.24f, 36.9477f, -0.773726f);
		FakeVec3f zAxis(3.0f, 15.0f, 7.0f);
		FakeVec3f expectedXAxis(-0.0882223f, -0.406693f, 0.909295f);
		FakeVec3f expectedYAxis(0.94916f, -0.149346f, -0.0867555f);
		FakeVec3f expectedZAxis(0.178331f, 0.891657f, 0.416107f);

		FakeTimer timer("FakeVector3Tests::test_create_ortho_normal_basis");
		FakeVec3f::CreateOrthoNormalBasis(xAxis, yAxis, zAxis);
		timer.Stop();

		if (!assert_equal(timer, expectedXAxis, xAxis))
			return -1;

		if (!assert_equal(timer, expectedYAxis, yAxis))
			return -1;

		if (!assert_equal(timer, expectedZAxis, zAxis))
			return -1;

		return 0;
		}
	
	int test_find_best_axis_vectors()
		{
		FakeVec3f v(1.4f, 1.8f, 12.5f);
		FakeVec3f firstAxis(2.4f, 12.5f, 21.8f);
		FakeVec3f secondAxis(3.0f, 15.0f, 7.0f);
		FakeVec3f expectedFirstAxis(-0.0542172f, -0.14232f, -0.988335f);
		FakeVec3f expectedSecondAxis(-1.19209e-07f, -0.705953f, 0.101657f);

		FakeTimer timer("FakeVector3Tests::test_find_best_axis_vectors");
		v.FindBestAxisVectors(firstAxis, secondAxis);
		timer.Stop();

		if (!assert_equal(timer, expectedFirstAxis, firstAxis))
			return -1;

		if (!assert_equal(timer, expectedSecondAxis, secondAxis))
			return -1;

		return 0;
		}
	
	int test_triangle_area()
		{
		FakeVec3f v0(1.4f, 1.8f, 12.5f);
		FakeVec3f v1(2.4f, 12.5f, 21.8f);
		FakeVec3f v2(3.0f, 15.0f, 7.0f);
		float expected = 91.396f;

		FakeTimer timer("FakeVector3Tests::test_triangle_area");
		float result = FakeVec3f::TriangleArea(v0, v1, v2);
		timer.Stop();

		if (!assert_equal(timer, expected, result))
			return -1;

		return 0;
		}
	}
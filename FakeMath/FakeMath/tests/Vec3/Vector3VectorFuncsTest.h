#ifndef FAKE_VECTOR_3_VECTOR_FUNCS_TEST_H
#define FAKE_VECTOR_3_VECTOR_FUNCS_TEST_H

namespace FakeVector3Tests
	{
	int test_floor();
	int test_round();
	int test_ceil();
	int test_frac();

	int test_clamp_1();
	int test_clamp_2();

	int test_distance();
	int test_distance_squared();

	int test_dot();
	int test_dot_operator();

	int test_cross();
	int test_cross_operator();

	int test_lerp_1();
	int test_lerp_2();

	int test_smooth_step_1();
	int test_smooth_step_2();
	
	int test_hermite_1();
	int test_hermite_2();
	
	int test_reflect_1();
	int test_reflect_2();

	int test_transform_quaternion_1();
	int test_transform_quaternion_2();
	int test_transform_matrix_1();
	int test_transform_matrix_2();
	int test_transform_coordinate_1();
	int test_transform_coordinate_2();
	int test_transform_normal_1();
	int test_transform_normal_2();
	
	int test_project_1();
	int test_project_2();
	int test_project_3();
	int test_project_on_plane();
	int test_unproject_1();
	int test_unproject_2();
	
	int test_create_ortho_normal_basis();
	int test_find_best_axis_vectors();
	int test_triangle_area();
	}

#endif
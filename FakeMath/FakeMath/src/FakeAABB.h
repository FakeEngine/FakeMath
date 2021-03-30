#ifndef FAKE_AABB_H
#define FAKE_AABB_H

#include "FakeVector3.h"

template<typename T>
struct FakeAABB
	{
	FakeVector3<T> Min;
	FakeVector3<T> Max;


	};

#endif

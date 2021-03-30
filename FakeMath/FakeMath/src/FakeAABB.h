#pragma once

#include "FakeVector3.h"

template<typename T>
struct FakeAABB
	{
	FakeVector3<T> Min;
	FakeVector3<T> Max;


	};
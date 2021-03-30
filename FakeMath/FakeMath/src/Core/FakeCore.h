#ifndef FAKE_CORE_H
#define FAKE_CORE_H

#include <memory>

typedef unsigned int uint32;
typedef signed int int32;
typedef unsigned long long uint64;
typedef signed long long int64;

template<typename T>
using Ref = std::shared_ptr<T>;

template<typename T, typename ... Args>
constexpr Ref<T> CreateRef(Args&& ... args)
	{
	return std::make_shared<T>(std::forward<Args>(args)...);
	}

#endif

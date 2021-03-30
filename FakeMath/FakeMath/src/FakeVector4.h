#ifndef FAKE_VECTOR_4_H
#define FAKE_VECTOR_4_H

template<typename T>
struct FakeVector2;

template<typename T>
struct FakeVector3;

template<typename T>
struct FakeMatrix4x4;

template<typename T>
struct FakeVector4
	{
	union
		{
		struct
			{
			T X;
			T Y;
			T Z;
			T W;
			};

		T Raw[4];
		};

	static const FakeVector4 Zero;
	static const FakeVector4 One;
	static const FakeVector4 UnitX;
	static const FakeVector4 UnitY;
	static const FakeVector4 UnitZ;
	static const FakeVector4 UnitW;
	static const FakeVector4 Minimum;
	static const FakeVector4 Maximum;

	FakeVector4()
		: X(0), Y(0), Z(0), W(0)
		{
		}


	};

template<typename T>
const FakeVector4<T> FakeVector4<T>::Zero(static_cast<T>(0));

template<typename T>
const FakeVector4<T> FakeVector4<T>::One(static_cast<T>(1));

template<typename T>
const FakeVector4<T> FakeVector4<T>::UnitX(static_cast<T>(1), static_cast<T>(0), static_cast<T>(0), static_cast<T>(0));

template<typename T>
const FakeVector4<T> FakeVector4<T>::UnitY(static_cast<T>(0), static_cast<T>(1), static_cast<T>(0), static_cast<T>(0));

template<typename T>
const FakeVector4<T> FakeVector4<T>::UnitZ(static_cast<T>(0), static_cast<T>(0), static_cast<T>(1), static_cast<T>(0));

template<typename T>
const FakeVector4<T> FakeVector4<T>::UnitW(static_cast<T>(0), static_cast<T>(0), static_cast<T>(0), static_cast<T>(1));

template<typename T>
const FakeVector4<T> FakeVector4<T>::Minimum(fake_min<T>());

template<typename T>
const FakeVector4<T> FakeVector4<T>::Maximum(fake_max<T>());

typedef FakeVector4<double> FakeVec4d;
typedef FakeVector4<float> FakeVec4f;
typedef FakeVector4<int32> FakeVec4i;
typedef FakeVector4<short> FakeVec4s;
typedef FakeVector4<long> FakeVec4l;
typedef FakeVector4<bool> FakeVec4b;

#endif

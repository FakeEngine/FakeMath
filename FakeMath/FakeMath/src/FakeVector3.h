#ifndef FAKE_VECTOR_3_H
#define FAKE_VECTOR_3_H

template<typename T>
struct FakeVector2;

template<typename T>
struct FakeVector4;

template<typename T>
struct FakeMatrix4x4;

template<typename T>
struct FakeQuaternion;

template<typename T>
struct FakeVector3
	{
	union
		{
		struct
			{
			T X;
			T Y;
			T Z;
			};

		T Raw[3];
		};

	static const FakeVector3 Zero;
	static const FakeVector3 One;
	static const FakeVector3 Half;
	static const FakeVector3 UnitX;
	static const FakeVector3 UnitY;
	static const FakeVector3 UnitZ;
	static const FakeVector3 Up;
	static const FakeVector3 Down;
	static const FakeVector3 Left;
	static const FakeVector3 Right;
	static const FakeVector3 Forward;
	static const FakeVector3 Backward;
	static const FakeVector3 Minimum;
	static const FakeVector3 Maximum;

	FakeVector3()
		: X(0), Y(0), Z(0)
		{
		}


	};

template<typename T>
const FakeVector3<T> FakeVector3<T>::Zero(static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::One(static_cast<T>(1));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Half(static_cast<T>(0.5));

template<typename T>
const FakeVector3<T> FakeVector3<T>::UnitX(static_cast<T>(1), static_cast<T>(0), static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::UnitY(static_cast<T>(0), static_cast<T>(1), static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::UnitZ(static_cast<T>(0), static_cast<T>(0), static_cast<T>(1));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Up(static_cast<T>(0), static_cast<T>(1), static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Down(static_cast<T>(0), static_cast<T>(-1), static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Left(static_cast<T>(-1), static_cast<T>(0), static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Right(static_cast<T>(1), static_cast<T>(0), static_cast<T>(0));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Forward(static_cast<T>(0), static_cast<T>(0), static_cast<T>(1));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Backward(static_cast<T>(0), static_cast<T>(0), static_cast<T>(-1));

template<typename T>
const FakeVector3<T> FakeVector3<T>::Minimum(fake_min<T>());

template<typename T>
const FakeVector3<T> FakeVector3<T>::Maximum(fake_max<T>());

typedef FakeVector3<double> FakeVec3d;
typedef FakeVector3<float> FakeVec3f;
typedef FakeVector3<int32> FakeVec3i;
typedef FakeVector3<short> FakeVec3s;
typedef FakeVector3<long> FakeVec3l;
typedef FakeVector3<bool> FakeVec3b;


#endif

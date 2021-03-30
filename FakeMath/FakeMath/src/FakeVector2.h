#ifndef FAKE_VECTOR_2_H
#define FAKE_VECTOR_2_H

#include "FakeMathFunctions.h"

template<typename T>
struct FakeVector3;

template<typename T>
struct FakeVector4;

template<typename T>
struct FakeVector2
	{
	// @Test implemented
	union
		{
		struct
			{
			T X;
			T Y;
			};

		T Raw[2];
		};

	static const FakeVector2 Zero;
	static const FakeVector2 One;
	static const FakeVector2 UnitX;
	static const FakeVector2 UnitY;
	static const FakeVector2 Minimum;
	static const FakeVector2 Maximum;

	FakeVector2()
		: X(0), Y(0)
		{
		}

	FakeVector2(T xy)
		: X(xy), Y(xy)
		{
		}

	FakeVector2(T x, T y)
		: X(x), Y(y)
		{
		}

	FakeVector2(const FakeVector2 &other)
		: X(other.X), Y(other.Y)
		{
		}

	FakeVector2(const FakeVector3<T> &other)
		: X(other.X), Y(other.Y)
		{
		}

	FakeVector2(const FakeVector4<T> &other)
		: X(other.X), Y(other.Y)
		{
		}

	// @Test implemented
	FakeString ToString() const
		{
		return FakeString::ToString(X) + ", " + FakeString::ToString(Y);
		}

	bool IsNormalized() const
		{
		return fake_is_one(X * X + Y * Y);
		}

	bool IsZero() const
		{
		return fake_is_zero(X) && fake_is_zero(Y);
		}

	bool IsAnyZero() const
		{
		return fake_is_zero(X) || fake_is_zero(Y);
		}

	bool IsOne() const
		{
		return fake_is_one(X) && fake_is_one(Y);
		}

	// @Test implemented
	T Length() const
		{
		return fake_sqrt(X * X + Y * Y);
		}

	// @Test implemented
	T LengthSquared() const
		{
		return X * X + Y * Y;
		}

	// @Test implemented
	T InverseLength() const
		{
		return static_cast<T>(1) / Length();
		}

	FakeVector2 GetAbsolute() const
		{
		return FakeVector2(FAKE_ABS(X), FAKE_ABS(Y));
		}

	FakeVector2 GetNegative() const
		{
		return FakeVector2(-X, -Y);
		}

	T GetNormalized() const
		{
		T invLen = InverseLength();
		return FakeVector2(X * invLen, Y * invLen);
		}

	T AverageArithmetic() const
		{
		return (X + Y) * static_cast<T>(0.5);
		}

	T Min() const
		{
		return fake_min(X, Y);
		}

	T Max() const
		{
		return fake_max(X, Y);
		}

	bool IsNaN() const
		{
		return isnan(X) && isnan(Y);
		}

	bool IsInfinity() const
		{
		return isinf(X) && isinf(Y);
		}

	bool IsNaNOrInifinity() const
		{
		return IsNaN() || IsInfinity();
		}

	void Normalize()
		{
		const T length = Length();
		if (!fake_is_zero(length))
			{
			const T inv = static_cast<T>(1) / length;
			X *= inv;
			Y *= inv;
			}
		}

	void NormalizeFast()
		{
		const T inv = static_cast<T>(1) / Length();
		X *= inv;
		Y *= inv;
		}

	void Absolute()
		{
		X = FAKE_ABS(X);
		Y = FAKE_ABS(Y);
		}

	void Negate()
		{
		X = -X;
		Y = -Y;
		}

	static bool NearEqual(const FakeVector2 &x, const FakeVector2 &y)
		{
		return fake_near_equal(x.X, y.X) && fake_near_equal(y.X, y.Y);
		}

	static bool NearEqual(const FakeVector2 &x, const FakeVector2 &y, T epsilon)
		{
		return fake_near_equal(x.X, y.X, epsilon) && fake_near_equal(y.X, y.Y, epsilon);
		}



	bool operator==(const FakeVector2 &other) const
		{
		return X == other.X && Y == other.Y;
		}

	bool operator!=(const FakeVector2 &other) const
		{
		return !(*this == other);
		}
	};

template<typename T>
const FakeVector2<T> FakeVector2<T>::Zero(static_cast<T>(0));

template<typename T>
const FakeVector2<T> FakeVector2<T>::One(static_cast<T>(1));

template<typename T>
const FakeVector2<T> FakeVector2<T>::UnitX(static_cast<T>(1), static_cast<T>(0));

template<typename T>
const FakeVector2<T> FakeVector2<T>::UnitY(static_cast<T>(0), static_cast<T>(1));

template<typename T>
const FakeVector2<T> FakeVector2<T>::Minimum(fake_min<T>());

template<typename T>
const FakeVector2<T> FakeVector2<T>::Maximum(fake_max<T>());

typedef FakeVector2<double> FakeVec2d;
typedef FakeVector2<float> FakeVec2f;
typedef FakeVector2<int32> FakeVec2i;
typedef FakeVector2<short> FakeVec2s;
typedef FakeVector2<long> FakeVec2l;
typedef FakeVector2<bool> FakeVec2b;

#endif

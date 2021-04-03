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

	// @Test implemented
	bool IsNormalized() const
		{
		return fake_is_one(fake_round(X * X + Y * Y));
		}

	// @Test implemented
	bool IsZero() const
		{
		return fake_is_zero(X) && fake_is_zero(Y);
		}

	// @Test implemented
	bool IsAnyZero() const
		{
		return fake_is_zero(X) || fake_is_zero(Y);
		}

	// @Test implemented
	bool IsOne() const
		{
		return fake_is_one(X) && fake_is_one(Y);
		}

	// @Test implemented
	bool IsAnyOne() const
		{
		return fake_is_one(X) || fake_is_one(Y);
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

	// @Test implemented
	FakeVector2 GetAbsolute() const
		{
		return FakeVector2(FAKE_ABS(X), FAKE_ABS(Y));
		}

	// @Test implemented
	FakeVector2 GetNegative() const
		{
		return FakeVector2(-X, -Y);
		}

	// @Test implemented
	FakeVector2 GetNormalized() const
		{
		T invLen = InverseLength();
		return FakeVector2(X * invLen, Y * invLen);
		}

	// @Test implemented
	T AverageArithmetic() const
		{
		return (X + Y) * static_cast<T>(0.5);
		}

	// @Test implemented
	T Min() const
		{
		return fake_min(X, Y);
		}

	// @Test implemented
	T Max() const
		{
		return fake_max(X, Y);
		}

	// @Test implemented
	bool IsNaN() const
		{
		return isnan(X) && isnan(Y);
		}

	// @Test implemented
	bool IsInfinity() const
		{
		return isinf(X) && isinf(Y);
		}

	// @Test implemented
	bool IsNaNOrInifinity() const
		{
		return IsNaN() || IsInfinity();
		}

	// @Test implemented
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

	// @Test implemented
	void NormalizeFast()
		{
		const T inv = static_cast<T>(1) / Length();
		X *= inv;
		Y *= inv;
		}

	// @Test implemented
	void Absolute()
		{
		X = FAKE_ABS(X);
		Y = FAKE_ABS(Y);
		}

	// @Test implemented
	void Negate()
		{
		X = -X;
		Y = -Y;
		}

	// @Test implemented
	static bool NearEqual(const FakeVector2 &a, const FakeVector2 &b)
		{
		return fake_near_equal(a.X, b.X) && fake_near_equal(a.Y, b.Y);
		}

	// @Test implemented
	static bool NearEqual(const FakeVector2 &a, const FakeVector2 &b, T epsilon)
		{
		return fake_near_equal(a.X, b.X, epsilon) && fake_near_equal(a.Y, b.Y, epsilon);
		}

	// @Test implemented
	static void Add(const FakeVector2 &a, const FakeVector2 &b, FakeVector2 &result)
		{
		result.X = a.X + b.X;
		result.Y = a.Y + b.Y;
		}

	// @Test implemented
	static void Add(const FakeVector2 &a, T b, FakeVector2 &result)
		{
		result.X = a.X + b;
		result.Y = a.Y + b;
		}

	// @Test implemented
	static void Subtract(const FakeVector2 &a, const FakeVector2 &b, FakeVector2 &result)
		{
		result.X = a.X - b.X;
		result.Y = a.Y - b.Y;
		}

	// @Test implemented
	static void Subtract(const FakeVector2 &a, T b, FakeVector2 &result)
		{
		result.X = a.X - b;
		result.Y = a.Y - b;
		}

	// @Test implemented
	static void Multiply(const FakeVector2 &a, const FakeVector2 &b, FakeVector2 &result)
		{
		result.X = a.X * b.X;
		result.Y = a.Y * b.Y;
		}

	// @Test implemented
	static void Multiply(const FakeVector2 &a, T b, FakeVector2 &result)
		{
		result.X = a.X * b;
		result.Y = a.Y * b;
		}

	// @Test implemented
	static void Divide(const FakeVector2 &a, const FakeVector2 &b, FakeVector2 &result)
		{
		if (b > static_cast<T>(0))
			{
			result.X = a.X / b.X;
			result.Y = a.Y / b.Y;
			}
		else
			{
			result.X = static_cast<T>(0);
			result.Y = static_cast<T>(0);
			}
		}

	// @Test implemented
	static void Divide(const FakeVector2 &a, T b, FakeVector2 &result)
		{
		if (b > static_cast<T>(0))
			{
			result.X = a.X / b;
			result.Y = a.Y / b;
			}
		else
			{
			result.X = static_cast<T>(0);
			result.Y = static_cast<T>(0);
			}
		}

	// @Test implemented
	static FakeVector2 Add(const FakeVector2 &a, const FakeVector2 &b)
		{
		FakeVector2 result;
		Add(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Subtract(const FakeVector2 &a, const FakeVector2 &b)
		{
		FakeVector2 result;
		Subtract(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Multiply(const FakeVector2 &a, const FakeVector2 &b)
		{
		FakeVector2 result;
		Multiply(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Divide(const FakeVector2 &a, const FakeVector2 &b)
		{
		FakeVector2 result;
		Divide(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Add(const FakeVector2 &a, T b)
		{
		FakeVector2 result;
		Add(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Subtract(const FakeVector2 &a, T b)
		{
		FakeVector2 result;
		Subtract(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Multiply(const FakeVector2 &a, T b)
		{
		FakeVector2 result;
		Multiply(a, b, result);
		return result;
		}

	// @Test implemented
	static FakeVector2 Divide(const FakeVector2 &a, T b)
		{
		FakeVector2 result;
		Divide(a, b, result);
		return result;
		}

	// @TODO
	static FakeVector2 Floor(const FakeVector2 &v)
		{
		return FakeVector2(fake_floor(v.X), fake_floor(v.Y));
		}

	// @TODO
	static FakeVector2 Round(const FakeVector2 &v)
		{
		return FakeVector2(fake_round(v.X), fake_round(v.Y));
		}

	// @TODO
	static FakeVector2 Ceil(const FakeVector2 &v)
		{
		return FakeVector2(fake_ceil(v.X), fake_ceil(v.Y));
		}

	// @TODO
	static FakeVector2 Frac(const FakeVector2 &v)
		{
		return FakeVector2(v.X - (int32)v.X, v.Y - (int32)v.Y);
		}

	// @TODO
	static void Clamp(const FakeVector2 &value, const FakeVector2 &min, const FakeVector2 &max, FakeVector2 &result)
		{
		result.X = FAKE_MIN(FAKE_MAX(value.X, min.X), max.X);
		result.Y = FAKE_MIN(FAKE_MAX(value.Y, min.Y), max.Y);
		}

	// @TODO
	static FakeVector2 Clamp(const FakeVector2 &value, const FakeVector2 &min, const FakeVector2 &max)
		{
		T x = FAKE_MIN(FAKE_MAX(value.X, min.X), max.X);
		T y = FAKE_MIN(FAKE_MAX(value.Y, min.Y), max.Y);
		return FakeVector2(x, y);
		}

	// @TODO
	static T Distance(const FakeVector2 &value1, const FakeVector2 &value2)
		{
		const T x = value1.X - value2.X;
		const T y = value1.Y - value2.Y;
		return fake_sqrt(x * x + y * y);
		}

	// @TODO
	static T DistanceSquared(const FakeVector2 &value1, const FakeVector2 &value2)
		{
		const T x = value1.X - value2.X;
		const T y = value1.Y - value2.Y;
		return x * x + y * y;
		}

	// @TODO
	static T Dot(const FakeVector2 &value1, const FakeVector2 &value2)
		{
		return value1.X * value2.X + value1.Y * value2.Y;
		}

	// @TODO
	static T Cross(const FakeVector2 &value1, const FakeVector2 &value2)
		{
		return value1.X * value2.X - value1.Y * value2.Y;
		}

	// @Test implemented
	static void Min(const FakeVector2 &a, const FakeVector2 &b, FakeVector2 &result)
		{
		result.X = a.X < b.X ? a.X : b.X;
		result.Y = a.Y < b.Y ? a.Y : b.Y;
		}

	// @Test implemented
	static FakeVector2 Min(const FakeVector2 &a, const FakeVector2 &b)
		{
		return FakeVector2(a.X < b.X ? a.X : b.X, a.Y < b.Y ? a.Y : b.Y);
		}

	// @Test implemented
	static void Max(const FakeVector2 &a, const FakeVector2 &b, FakeVector2 &result)
		{
		result.X = a.X > b.X ? a.X : b.X;
		result.Y = a.Y > b.Y ? a.Y : b.Y;
		}

	// @Test implemented
	static FakeVector2 Max(const FakeVector2 &a, const FakeVector2 &b)
		{
		return FakeVector2(a.X > b.X ? a.X : b.X, a.Y > b.Y ? a.Y : b.Y);
		}

	// @TODO
	static void Lerp(const FakeVector2 &start, const FakeVector2 &end, T amount, FakeVector2 &result)
		{
		result.X = fake_lerp(start.X, end.X, amount);
		result.Y = fake_lerp(start.Y, end.Y, amount);
		}

	// @TODO
	static FakeVector2 Lerp(const FakeVector2 &start, const FakeVector2 &end, T amount)
		{
		FakeVector2 result;
		Lerp(start, end, amount, result);
		return result;
		}

	// @Test implemented
	bool operator==(const FakeVector2 &other) const
		{
		return X == other.X && Y == other.Y;
		}

	// @Test implemented
	bool operator!=(const FakeVector2 &other) const
		{
		return !(*this == other);
		}

	// @Test implemented
	bool operator<(const FakeVector2 &other) const
		{
		return X < other.X && Y < other.Y;
		}

	// @Test implemented
	bool operator<=(const FakeVector2 &other) const
		{
		return X <= other.X && Y <= other.Y;
		}

	// @Test implemented
	bool operator>(const FakeVector2 &other) const
		{
		return X > other.X && Y > other.Y;
		}

	// @Test implemented
	bool operator>=(const FakeVector2 &other) const
		{
		return X >= other.X && Y >= other.Y;
		}

	// @Test implemented
	bool operator==(T value) const
		{
		return X == value && Y == value;
		}

	// @Test implemented
	bool operator!=(T value) const
		{
		return !(*this == value);
		}

	// @Test implemented
	bool operator<(T value) const
		{
		return X < value && Y < value;
		}

	// @Test implemented
	bool operator<=(T value) const
		{
		return X <= value && Y <= value;
		}

	// @Test implemented
	bool operator>(T value) const
		{
		return X > value && Y > value;
		}

	// @Test implemented
	bool operator>=(T value) const
		{
		return X >= value && Y >= value;
		}

	// @Test implemented
	FakeVector2 operator+(const FakeVector2 &other) const
		{
		return Add(*this, other);
		}

	// @Test implemented
	FakeVector2 operator-(const FakeVector2 &other) const
		{
		return Subtract(*this, other);
		}

	// @Test implemented
	FakeVector2 operator*(const FakeVector2 &other) const
		{
		return Multiply(*this, other);
		}

	// @Test implemented
	FakeVector2 operator/(const FakeVector2 &other) const
		{
		return Divide(*this, other);
		}

	// @Test implemented
	FakeVector2 operator-() const
		{
		return FakeVector2(-X, -Y);
		}

	// @TODO
	T operator^(const FakeVector2 &other) const
		{
		return Cross(*this, other);
		}

	// @TODO
	T operator|(const FakeVector2 &other) const
		{
		return Dot(*this, other);
		}

	// @Test implemented
	FakeVector2 &operator+=(const FakeVector2 &other)
		{
		*this = Add(*this, other);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator-=(const FakeVector2 &other)
		{
		*this = Subtract(*this, other);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator*=(const FakeVector2 &other)
		{
		*this = Multiply(*this, other);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator/=(const FakeVector2 &other)
		{
		*this = Divide(*this, other);
		return *this;
		}

	// @Test implemented
	FakeVector2 operator+(T scalar) const
		{
		return Add(*this, scalar);
		}

	// @Test implemented
	FakeVector2 operator-(T scalar) const
		{
		return Subtract(*this, scalar);
		}

	// @Test implemented
	FakeVector2 operator*(T scalar) const
		{
		return Multiply(*this, scalar);
		}

	// @Test implemented
	FakeVector2 operator/(T scalar) const
		{
		return Divide(*this, scalar);
		}

	// @Test implemented
	FakeVector2 &operator+=(T scalar)
		{
		*this = Add(*this, scalar);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator-=(T scalar)
		{
		*this = Subtract(*this, scalar);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator*=(T scalar)
		{
		*this = Multiply(*this, scalar);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator/=(T scalar)
		{
		*this = Divide(*this, scalar);
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator++(int)
		{
		X++;
		Y++;
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator--(int)
		{
		X--;
		Y--;
		return *this;
		}

	// @Test implemented
	FakeVector2 &operator=(const FakeVector2 &other)
		{
		X = other.X;
		Y = other.Y;
		return *this;
		}

	// @Test implemented
	T *operator*()
		{
		return &Raw[0];
		}

	// @Test implemented
	const T *operator*() const
		{
		return &Raw[0];
		}

	// @Test implemented
	T &operator[](uint32 index)
		{
		static T wrongRet = static_cast<T>(-1);
		if (index < 2)
			return *((T*)this + index);
		else
			return wrongRet;
		}

	// @Test implemented
	const T &operator[](uint32 index) const
		{
		static T wrongRet = static_cast<T>(-1);
		if (index < 2)
			return *((T*)this + index);
		else
			return wrongRet;
		}

	// @Test not needed
	friend std::ostream &operator<<(std::ostream &stream, const FakeVector2 &v)
		{
		stream << v.X << ", " << v.Y;
		return stream;
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

// @Test implemented
template<typename T>
inline FakeVector2<T> operator+(T scalar, const FakeVector2<T> &v)
	{
	return v + scalar;
	}

// @Test implemented
template<typename T>
inline FakeVector2<T> operator-(T scalar, const FakeVector2<T> &v)
	{
	return v - scalar;
	}

// @Test implemented
template<typename T>
inline FakeVector2<T> operator*(T scalar, const FakeVector2<T> &v)
	{
	return v * scalar;
	}

// @Test implemented
template<typename T>
inline FakeVector2<T> operator/(T scalar, const FakeVector2<T> &v)
	{
	return v / scalar;
	}

typedef FakeVector2<double> FakeVec2d;
typedef FakeVector2<float> FakeVec2f;
typedef FakeVector2<int32> FakeVec2i;
typedef FakeVector2<short> FakeVec2s;
typedef FakeVector2<long> FakeVec2l;
typedef FakeVector2<bool> FakeVec2b;

#endif

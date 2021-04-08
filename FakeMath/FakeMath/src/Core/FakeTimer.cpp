#include "FakeTimer.h"

#include <iostream>

FakeTimer::FakeTimer(const char *name)
	: Stopped(false), Name(name), OutputString("")
	{
	StartPoint = std::chrono::high_resolution_clock::now();
	}

FakeTimer::~FakeTimer()
	{
	if (!Stopped)
		Stop();
	}

void FakeTimer::Start(const char *name)
	{
	if (!Name.IsEmpty())
		{
		Name = name;
		}

	Stopped = false;
	StartPoint = std::chrono::high_resolution_clock::now();
	OutputString.Clear();
	}

void FakeTimer::Stop(FakePrecision precision)
	{
	auto endPoint = std::chrono::high_resolution_clock::now();
	long long start = 0;
	long long end = 0;

	if (precision == FakePrecision::MICROSECONDS)
		{
		start = std::chrono::time_point_cast<std::chrono::microseconds>(StartPoint).time_since_epoch().count();
		end = std::chrono::time_point_cast<std::chrono::microseconds>(endPoint).time_since_epoch().count();
		OutputString << " The test took " << (end - start) << " microseconds.";
		}
	else if (precision == FakePrecision::MILLISECONDS)
		{
		start = std::chrono::time_point_cast<std::chrono::milliseconds>(StartPoint).time_since_epoch().count();
		end = std::chrono::time_point_cast<std::chrono::milliseconds>(endPoint).time_since_epoch().count();
		OutputString << " The test took " << (end - start) << " milliseconds.";
		}

	Stopped = true;
	}

const FakeString &FakeTimer::GetName() const
	{
	return Name;
	}

const FakeString &FakeTimer::GetOutputString() const
	{
	return OutputString;
	}

void FakeTimer::PrintOutputString()
	{
	std::cout << OutputString << std::endl;
	}

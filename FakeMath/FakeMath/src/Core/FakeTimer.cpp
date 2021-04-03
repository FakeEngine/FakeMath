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

void FakeTimer::Stop()
	{
	auto endPoint = std::chrono::high_resolution_clock::now();

	long long start = std::chrono::time_point_cast<std::chrono::microseconds>(StartPoint).time_since_epoch().count();
	long long end = std::chrono::time_point_cast<std::chrono::microseconds>(endPoint).time_since_epoch().count();

	OutputString << " The test took " << (end - start) << " microseconds.";
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

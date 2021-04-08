/*
 * \file  FakeTimer.h
 * \brief 
 *
 * \author Can Karka
 * \date   March 2021
 *
 * Copyright (C) 2021 Can Karka
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <chrono>

#include "FakeString.h"

enum class FakePrecision
	{
	MICROSECONDS, MILLISECONDS
	};

class FakeTimer
	{
	private:
		bool Stopped;
		FakeString Name;
		FakeString OutputString;
		std::chrono::time_point<std::chrono::high_resolution_clock> StartPoint;

	public:

		FakeTimer(const char *name = "default");
		~FakeTimer();

		void Start(const char *name = "default");
		void Stop(FakePrecision precision = FakePrecision::MICROSECONDS);

		const FakeString &GetName() const;
		const FakeString &GetOutputString() const;
		void PrintOutputString();
	};
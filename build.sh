#!/bin/bash
#
# <c> by Can Karka

gcc FakeMath/FakeMath/src/Core/FakeConsole.cpp FakeMath/FakeMath/src/Core/FakeTimer.cpp FakeMath/FakeMath/src/Core/Test.cpp FakeMath/FakeMath/src/Platform/Unix/FakeUnixConsole.cpp FakeMath/FakeMath/src/Core/FakeString.cpp FakeMath/FakeMath/src/Main.cpp FakeMath/FakeMath/tests/Vec2/AdditionTest.cpp FakeMath/FakeMath/tests/Vec2/DivisionTest.cpp FakeMath/FakeMath/tests/Vec2/LengthTest.cpp FakeMath/FakeMath/tests/Vec2/MultiplicationTest.cpp FakeMath/FakeMath/tests/Vec2/NormalizationTest.cpp FakeMath/FakeMath/tests/Vec2/SubtractionTest.cpp FakeMath/FakeMath/tests/Vec2/ToStringTest.cpp FakeMath/FakeMath/tests/Vec2/UnionTest.cpp -std=c++14 -lstdc++ -lm -g -DPLATFORM_LINUX -D_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS -D_CRT_SECURE_NO_WARNINGS -o FakeMathUnitTests

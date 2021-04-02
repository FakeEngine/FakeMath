#include "Test.h"

int perform_tests(TestFn funcs[], uint32 count)
	{
	FakeTimer timer("GlobalTimer");
	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;

	for (uint32 i = 0; i < count; ++i)
		{
		int exitCode = funcs[i]();
		if (exitCode == -1)
			{
			foreground = FakeConsoleForeground::RED;
			console->WriteLine("Error: Some tests have failed!", foreground, background);
			return -1;
			}
		}

	timer.Stop();
	console->WriteLine("OK: All Tests have passed successfully!" + timer.GetOutputString(), foreground, background);
	return 0;
	}

bool assert_equal(const FakeTimer &timer, float value1, float value2)
	{
	bool result = (fabs(value1 - value2) < 0.005f);
	FAKE_ASSERT(result, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);
	
	return true;
	}

bool assert_not_equal(const FakeTimer &timer, float value1, float value2)
	{
	return !assert_equal(timer, value1, value2);
	}

bool assert_equal(const FakeTimer &timer, const FakeVec2f &value1, const FakeVec2f &value2)
	{
	bool xEqual = assert_equal(timer, value1.X, value2.X);
	bool yEqual = assert_equal(timer, value2.Y, value2.Y);
	FAKE_ASSERT(xEqual && yEqual, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const FakeVec2f &value1, const FakeVec2f &value2)
	{
	return !assert_equal(timer, value1, value2);
	}

bool assert_equal(const FakeTimer &timer, const FakeVec3f &value1, const FakeVec3f &value2)
	{
	bool xEqual = assert_equal(timer, value1.X, value2.X);
	bool yEqual = assert_equal(timer, value2.Y, value2.Y);
	bool zEqual = assert_equal(timer, value2.Z, value2.Z);
	FAKE_ASSERT(xEqual && yEqual && zEqual, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const FakeVec3f &value1, const FakeVec3f &value2)
	{
	return !assert_equal(timer, value1, value2);
	}

bool assert_equal(const FakeTimer &timer, const FakeVec4f &value1, const FakeVec4f &value2)
	{
	bool xEqual = assert_equal(timer, value1.X, value2.X);
	bool yEqual = assert_equal(timer, value2.Y, value2.Y);
	bool zEqual = assert_equal(timer, value2.Z, value2.Z);
	bool wEqual = assert_equal(timer, value2.W, value2.W);
	FAKE_ASSERT(xEqual && yEqual && zEqual && wEqual, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const FakeVec4f &value1, const FakeVec4f &value2)
	{
	return !assert_equal(timer, value1, value2);
	}


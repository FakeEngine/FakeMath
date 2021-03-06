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

	timer.Stop(FakePrecision::MILLISECONDS);
	console->WriteLine("OK: All Tests have passed successfully!" + timer.GetOutputString(), foreground, background);
	return 0;
	}

bool assert_equal(const FakeTimer &timer, float value1, float value2, bool forcePrint)
	{
	bool result = (fabs(value1 - value2) < 0.005f);
	FAKE_ASSERT(result, timer.GetName());

	if (forcePrint)
		{
		Ref<FakeConsole> console = FakeConsole::Create();
		FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
		FakeConsoleBackground background = FakeConsoleBackground::BLACK;
		console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);
		}
	
	return true;
	}

bool assert_not_equal(const FakeTimer &timer, float value1, float value2, bool forcePrint)
	{
	return !assert_equal(timer, value1, value2, forcePrint);
	}

bool assert_equal(const FakeTimer &timer, double value1, double value2, bool forcePrint)
	{
	bool result = (abs(value1 - value2) < 0.005);
	FAKE_ASSERT(result, timer.GetName());

	if (forcePrint)
		{
		Ref<FakeConsole> console = FakeConsole::Create();
		FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
		FakeConsoleBackground background = FakeConsoleBackground::BLACK;
		console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);
		}

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, double value1, double value2, bool forcePrint)
	{
	return !assert_equal(timer, value1, value2, forcePrint);
	}

bool assert_equal(const FakeTimer &timer, const FakeVec2f &value1, const FakeVec2f &value2, bool forcePrint)
	{
	bool xEqual = assert_equal(timer, value1.X, value2.X, false);
	bool yEqual = assert_equal(timer, value2.Y, value2.Y, false);
	FAKE_ASSERT(xEqual && yEqual, timer.GetName());

	if (forcePrint)
		{
		Ref<FakeConsole> console = FakeConsole::Create();
		FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
		FakeConsoleBackground background = FakeConsoleBackground::BLACK;
		console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);
		}

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const FakeVec2f &value1, const FakeVec2f &value2, bool forcePrint)
	{
	return !assert_equal(timer, value1, value2, forcePrint);
	}

bool assert_equal(const FakeTimer &timer, const FakeVec3f &value1, const FakeVec3f &value2, bool forcePrint)
	{
	bool xEqual = assert_equal(timer, value1.X, value2.X, false);
	bool yEqual = assert_equal(timer, value2.Y, value2.Y, false);
	bool zEqual = assert_equal(timer, value2.Z, value2.Z, false);
	FAKE_ASSERT(xEqual && yEqual && zEqual, timer.GetName());

	if (forcePrint)
		{
		Ref<FakeConsole> console = FakeConsole::Create();
		FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
		FakeConsoleBackground background = FakeConsoleBackground::BLACK;
		console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);
		}

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const FakeVec3f &value1, const FakeVec3f &value2, bool forcePrint)
	{
	return !assert_equal(timer, value1, value2, forcePrint);
	}

bool assert_equal(const FakeTimer &timer, const FakeVec4f &value1, const FakeVec4f &value2, bool forcePrint)
	{
	bool xEqual = assert_equal(timer, value1.X, value2.X, false);
	bool yEqual = assert_equal(timer, value2.Y, value2.Y, false);
	bool zEqual = assert_equal(timer, value2.Z, value2.Z, false);
	bool wEqual = assert_equal(timer, value2.W, value2.W, false);
	FAKE_ASSERT(xEqual && yEqual && zEqual && wEqual, timer.GetName());

	if (forcePrint)
		{
		Ref<FakeConsole> console = FakeConsole::Create();
		FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
		FakeConsoleBackground background = FakeConsoleBackground::BLACK;
		console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);
		}

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const FakeVec4f &value1, const FakeVec4f &value2, bool forcePrint)
	{
	return !assert_equal(timer, value1, value2, forcePrint);
	}


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


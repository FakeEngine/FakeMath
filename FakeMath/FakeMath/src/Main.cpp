#include <iostream>

#include "Core/Test.h"

int main(int argc, char *argv[])
	{
	TestFn tests[1] =
		{
		
		};

	int exitCode = perform_tests(tests, sizeof(tests) / sizeof(TestFn));
	// std::system("PAUSE");
	return exitCode;
	}
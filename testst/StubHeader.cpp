#include <iostream>
#include "StubHeader.h"

int FAKE_RNG::foo()
{
	std::cout << "Hello from fake!" << std::endl;
	return 0;
}
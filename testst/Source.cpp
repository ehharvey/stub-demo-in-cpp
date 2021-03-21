#ifdef _DEBUG // If VS is set to debug
#include "StubHeader.h"
#define RNG FAKE_RNG // Needed to shift the namespace
#else // If VS is set to Release
#include "RealHeader.h"
#endif 


#include <iostream>


int main(void) {
	RNG::foo();
	return EXIT_SUCCESS;
}
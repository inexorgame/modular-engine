#include <iostream>
#include "module-test.hpp"

// Windows specific code
#ifdef WIN32
	#define DLL_EXPORT
#endif

namespace inexor {
namespace module_test {
	
	// Windows specific code
	#ifdef WIN32

	extern "C"
	{
		DECLDIR int TestFunction(int a, int b)
		{
			return a+b;
		}
	}

	#endif

};
};

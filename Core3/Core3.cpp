// Core3.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core3.h"
using namespace std;



// This is an example of an exported variable
CORE3_API int nCore3=0;

// This is an example of an exported function.
CORE3_API int fnCore3(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore3::CCore3()
{
    return;
}


int Core3Libnamespace::Core3class::SuccessfulCancellation()
{
    std::cout << "----------- Core 3 Library -----------" << endl;
    std::cout << "Validating Cancellation of Order" << endl;
    return 1;
}
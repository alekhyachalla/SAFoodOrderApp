// Core2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core2.h"



// This is an example of an exported variable
CORE2_API int nCore2=0;

// This is an example of an exported function.
CORE2_API int fnCore2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore2::CCore2()
{
    return;
}

int Core2Libnamespace::Core2class::Login()
{   std::cout << "---------- Core 2  Library-----------" << std::endl;
    std::cout << "Login Successful!" << std::endl;
    return 1;
}

int Core2Libnamespace::Core2class::ValidateDeliveryTime()
{   std::cout << "---------- Core 2  Library-----------" << std::endl;
    std::cout << "Validation for In-TIme Order Delivery" << std::endl;
    return 1;
}


// Core1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core1.h"



// This is an example of an exported variable
CORE1_API int nCore1=0;

// This is an example of an exported function.
CORE1_API int fnCore1(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore1::CCore1()
{
    return;
}

void Core1Libnamespace::Core1class::Orders(int no, std::string desc)
{   
    std::cout << "------- Order creation in Core 1 Library  --------- " << std::endl;
    std::cout << "Orders is created with orders number and description";
}
int Core1Libnamespace::Core1class::OrderValidation(std::string desc)
{   std::cout << "------- Order Validation in Core 1 Library --------- " << std::endl;
    std::cout << "Order is being Validated and confirmed with the Restaurant" << std::endl;
    return 1;
}


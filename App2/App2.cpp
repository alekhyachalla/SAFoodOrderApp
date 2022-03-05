// App2.cpp : Defines the exported functions for the DLL.
//

#include<iostream>
#include "framework.h"
#include "App2.h"
#include "../Core1/Core1.h"
#include "../Core2/Core2.h"



// This is an example of an exported variable
APP2_API int nApp2=0;

// This is an example of an exported function.
APP2_API int fnApp2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CApp2::CApp2()
{
    return;
}



void App2CancellationNamespace::App2CancellationClass::CancellationSurvey()
{
    if (Core2Libnamespace::Core2class::ValidateDeliveryTime()) {
        std::cout << "--------- Application 2 Library Delivery Tie Validation---------" <<std::endl;
        std::cout << "Validating delivery time"<<std::endl;
        
    }
}

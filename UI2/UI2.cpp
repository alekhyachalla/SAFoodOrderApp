// UI2.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UI2.h"
#include "../Core1/Core1.h"
#include "../Core3/Core3.h"
#include "../App2/App2.h"




// This is an example of an exported variable
UI2_API int nUI2=0;

// This is an example of an exported function.
UI2_API int fnUI2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUI2::CUI2()
{
    return;
}

void UILib2::uilib2::CancelOrderUIfunc()
{
    std::cout << "--------- UI 2 Library ---------" <<std::endl;
    App2CancellationNamespace::App2CancellationClass::CancellationSurvey();
    if (Core3Libnamespace::Core3class::SuccessfulCancellation()) {

        std::cout << "Order Cancellation taking place in UI 2  Library " <<std::endl;


    }
    std::cout << "Order Cancellation Successful" <<std::endl;
}

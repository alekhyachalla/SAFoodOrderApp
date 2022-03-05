// App1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "App1.h"
#include "../Core1/Core1.h"
#include "../Core2/Core2.h"
#include "../Core3/Core3.h"

// This is an example of an exported variable
APP1_API int nApp1=0;

// This is an example of an exported function.
APP1_API int fnApp1(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CApp1::CApp1()
{
    return;
}

std::string App1Ordernamespace::Orders::placeOrder(std::string name)
{
    std::cout << "--------- Application 1  Place Order---------" <<std::endl;
    if (Core1Libnamespace::Core1class::OrderValidation(name)) {
        return "placed orders and Intimating the Restaurant ";
    }
    return "Issue with placed orders";
    
}

std::string App1Ordernamespace::Orders::orderDelivery(std::string name)
{
    std::cout << "--------- Application 1 Order Delivery---------" <<std::endl;
    if (Core2Libnamespace::Core2class::ValidateDeliveryTime()) {
        return "Order delivery on the way! ";
    }
    return "Either Orders are not delivered or are delayed ";
    
}


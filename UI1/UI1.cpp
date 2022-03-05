// UI1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UI1.h"
#include "../Core3/Core3.h"
#include <boost/locale.hpp>
#include "../App1/App1.h"
#include "../Core2/Core2.h"

using namespace boost::locale;


// This is an example of an exported variable
UI1_API int nUI1=0;

// This is an example of an exported function.
UI1_API int fnUI1(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUI1::CUI1()
{
    return;
}

void UILib1::uilib1::OrderUIfunc()
{
    if (Core2Libnamespace::Core2class::Login()) {
        generator gen;
        gen.add_messages_path("E:\\SAGroup20\\UI1");
        gen.add_messages_domain("UI1Library");
        std::locale::global(gen(""));
        std::cout.imbue(std::locale());


        std::cout << "--------- UI 1 Library  ---------" <<std::endl;
        std::cout << translate(" Order Processing") << std::endl;
        std::cout << App1Ordernamespace::Orders::placeOrder("placeorder") << std::endl;
        std::cout << App1Ordernamespace::Orders::orderDelivery("orderdelivery") << std::endl;
    }
}

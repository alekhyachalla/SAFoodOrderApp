// SAGroup20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../UI2/UI2.h"
#include <boost/locale.hpp>
#include<locale>
#include "../UI1/UI1.h"
using namespace boost::locale;
using namespace std;
int main()
{
    //generator for the Food Ordering App
    generator gen;
    gen.add_messages_path(".");
    gen.add_messages_domain("Food Ordering Application");

    //The locales available are default English and also German
    std::locale::global(gen(""));
    std::cout.imbue(std::locale());

    //Cout Statements to display the Rendering of the Libraries and Functions
    std::cout << "------------------------------"<<endl;
    std::cout << "Food Ordering Application"<<endl;
    std::cout << "------------------------------"<<endl;
    std::cout << " "<<endl;
    std::cout << translate("This is the Online Food Ordering API")<<endl;
    // The Rendering of the Ordering Food UI
    UILib1::uilib1::OrderUIfunc();
    // The Rendering of the Cancelling the Ordered Food UI in the APplication
    UILib2::uilib2::CancelOrderUIfunc();
}


#pragma once
#include "Core1.h"
#include <string>

/**
* InputOrdersObserver is used to observe the orders status
*/
class CORE1_API InputOrdersObserver {
public:
    /*
        User defined datatypes */
    enum jobTypes
    {
        /**
         Job for observing the placed orders.
        */
        placeOrder,

        /**
         Job for observing the removed orders.
       */
       orderDelivery,
    };
    /**
        * <summary> Removes or destructs the existing object of InputOrdersObserver </summary>
        */
    virtual ~InputOrdersObserver() {};

    /** <summary>This method updates the observer about the orders existence </summary>
     *  [Core1class.OrderValidation()](@ref Core1class.OrderValidation()) to check for update.
     */

     /**
        * updates the observer with the message from the subject
        */
    virtual void update(const std::string& message_from_subject) = 0;
};
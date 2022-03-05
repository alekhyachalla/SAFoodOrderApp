#pragma once
#include "Core1.h"
#include "Subject.h"
#include <list>
#include <iostream>

class Observer;
/** Establishes a session
*/
class CORE1_API Session : Subject
{
public:

    /**
    * This method is used to get the instance of the session.
    */
    static Session& GetInstance();

    Session(Session const&) = delete;
    void operator=(Session const&) = delete;


    virtual ~Session();

    /**
     * The subscription management methods.
     */
    void add(InputOrdersObserver* observer) override;

    /**
     * Detaches the Observer.
     */
    void remove(InputOrdersObserver* observer) override;

    /**
     * Notifies the observer about the orders.
     */
    void alert() override;

    /**
     * Notifies the observer about the orders and type of the job.
     */
    void alert(InputOrdersObserver::jobTypes jobType) override;


    /**
     * Observer can respond back with  a message of what type of job they observed.
     */
    void response(InputOrdersObserver::jobTypes jobType);

    /**
     * Observer can write a message.
     */
    void response(std::string message = "check");


private:
    std::list<InputOrdersObserver*> observer_list;
    std::string response;
    Session();
    /**
        * Variable of type place which is used to place the orders.
        */
    Observer* messageForplaceOrder;

    /**
        * Variable of type Observer which is used to remove the orders.
        */
    Observer* messageFororderDelivery;

};


#pragma once
#include "Core1.h"
#include "InputOrdersObserver.h"
#include "SessionManager.h"

/**
* Observer class to count the number of oberservers
*/
class CORE1_API Observer : public InputOrdersObserver
{

public:

    /**
    * Decribes when a observer has to establish a session and walkthrough the job types.
    */
    Observer(Session& sesssion, jobTypes jobType);

    /**
    * Observer destructer.
    */
    virtual ~Observer();

    /**
    * Overridding the update funtion.
    */
    void update(const std::string& message_from_subject) override;

    /**
    * removes the observer from the list
    */
    void removeObserver();

    /**
    * print the response from the observers
    */
    void printResponse(); //  

    /**
    *  gives an update on the job that is being called
    */
    bool updateOnJob(jobTypes jobType);

private:

    /**
   *  message from the subject.
   */
    std::string message_from_subject_;
    Session& coreSession_;


    /**
   *  to get the observer count
   */
    static int count;  // 
    jobTypes jobTypes;

};


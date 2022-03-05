#pragma once
#pragma once
#include "Core1.h"
#include <string>
#include "InputOrdersObserver.h"

/**
* subject class is used to add remove and alert the observers.
*/
class CORE1_API Subject {
public:
    /**
    * Removes the existing object of Subject interface.
     */
    virtual ~Subject() {};

    /**
   * Adds jobs to the observer
   */
    virtual void add(InputOrdersObserver* observer) = 0;

    /**
   * Removes jobs to the observer
   */
    virtual void remove(InputOrdersObserver* observer) = 0;

    /**
   * to alert jobs to the observer
   */
    virtual void alert() = 0;

    /**
   * to alert all the observers listening to the jobs
   */
    virtual void alert(InputOrdersObserver::jobTypes jobType) = 0;
};
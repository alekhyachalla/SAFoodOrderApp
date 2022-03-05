#pragma once
#include "Core1.h"
#include "InputOrdersObject.h"

namespace CoreLibrary1
{
/**
* Ordersobject is used to create the object for Orders
*/
	class OrdersObject : InputOrdersObject
	{
	public:

		/**
		* Overridding the test() method in the InputOrdersObject header file
		*/
		int test() override;

	};
}
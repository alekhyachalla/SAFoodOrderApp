#pragma once
#include "Core1.h"

/*namespace for Builder header file
*/
namespace Core1Libnamespace
{
	/**
* Creates Orders object of class whose name is OrdersObject
*/
	class OrdersObject;
/*Builder class has OrdersObject to place the orders*/
	class CORE1_API Builder
	{
		/*
		places the builder*/

		virtual OrdersObject* place() = 0;
	};



}

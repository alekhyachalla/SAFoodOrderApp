#pragma once
#include "Core1.h"
#include "Builder.h"

/**
* namespace for BuilderOrders header file is Core1Libnamespace
*/
namespace Core1Libnamespace
{

/*Core1Libnamespace has a class OrdersObject which will be used to create orders.*/

	class OrdersObject;

	/**
* OrdersBuilder class which has user defined methods and enum types.
*/
	class CORE1_API BuilderOrders : public Builder
	{
	public:

		/**
		* Describes about different types of orders builders.
		*/
		enum OrdersBuilderTypes
		{
			/*OrdersDesc represents the orders name/description*/
			OrdersDesc,

			/*OrdersNoandDesc represents the orders number and description created by no and desc parameters*/
			OrdersNoandDesc,
		};

		/* Below two methods are to set the value the specific orders builder types*/
		/*Sets the value of the orders builder type*/

		void setOrdersType(OrdersBuilderTypes type);

		/*Once the task type is set then getter method like GetType is used to get the value.*/

		OrdersBuilderTypes getType();

		/** <summary> This method can create orders with only Orders number and description combination </summary>
		* [Core1class.Orders()](@ref Core1class.Orders()) to perform the Orders operation.
		*/
		void setOrdersNoandDesc(int no, std::string orders_desc);

		/**
		* Method to create orders with only orders description
		*/
		void setOrdersDesc(std::string orders_desc);

		/**
		* method to fetch the orders with number and description of orders
		*/
		OrdersBuilderTypes getOrders(int no, std::string desc);

		/**
		* method to set number to the orders
		*/
		void setNo(int no);

		/* method to fetch the orders using the certain orders number*/

		int getOrdersDesc(int no);


		OrdersObject* place() override;
	private:


	};
}

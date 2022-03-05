#pragma once
#include "Core1.h"
namespace Core1Libnamespace
{
	/**
	* Contains information about the orders builder.
	*/
	class BuilderOrders;

	/**
	* Describes about the orders features.
	*/
	class Orders;
	/**
	* Describes about the orders features and builds the orders builder .
	*/
	class CORE1_API OrdersCollection
	{
	public:
		/**
	* Describes about the orders features and builds the orders builder.
	*/
		OrdersCollection(int id);

		/**
	* Describes about the orders features and collects them.
	*/
		virtual ~OrdersCollection();

		/**
	* Builds the orders builder.
	*/
		BuilderOrders* createOrdersBuilder(Orders* orders);


	private:
		int id;
	};
}

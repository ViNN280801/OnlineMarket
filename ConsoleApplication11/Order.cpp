#include "stdafx.h"
#include "Order.h"


Order::Order()
{
}

void Order::Add(Product product, short int Count)
{
	StructOrder newStruct;

	newStruct.Count = Count;
	newStruct.product = product;

	for (auto i = 0; i < VectOrder.size(); i++)
	{
		if (VectOrder[i].product == newStruct.product)
		{
			VectOrder[i].Count += newStruct.Count;
			return;
		}
	}
	VectOrder.push_back(newStruct);
}

void Order::Del(Product product, short int Count)
{
	for (auto i = 0; i < VectOrder.size(); i++)
	{
		if (VectOrder[i].product == product)
			VectOrder.erase(VectOrder.begin() + i - 1);

	}
}

void Order::ShowOrder()
{
	float resultAmount = NULL;

	cout << endl << "Your order(-s): " << endl;

	for (auto i = 0; i < VectOrder.size(); i++)
	{
		resultAmount += VectOrder[i].Count * VectOrder[i].RealizePrice * (-1);

		cout << "Name of product: " << VectOrder[i].product.GetName() << endl;
		cout << "Count in storage: " << VectOrder[i].Count << endl << endl;
		cout << "Amount = " << resultAmount << " cents. " << endl;
	}
	cout << endl;
}

Order::~Order()
{
}

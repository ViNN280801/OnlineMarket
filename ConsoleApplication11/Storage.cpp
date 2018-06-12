#include "stdafx.h"
#include "Storage.h"
#include <vector>
#include <exception>

Storage::Storage()
{
}

void Storage::Add(Product product, short int Count)
{
	StoragePos newStruct;

	newStruct.Count = Count;
	newStruct.product = product;

	for (auto i = 0; i < list.size(); i++)
	{
		if (list[i].product == newStruct.product)
		{
			list[i].Count += newStruct.Count;
			return;
		}
	}
	list.push_back(newStruct);
}

int Storage::GetResidueInStorage(Product product)
{
	StoragePos newStruct;
	for (auto i = 0; i < list.size(); i++)
	{
		if (list[i].product == product)
		{
			return list[i].Count;
		}
	}

	return NULL;
}

void Storage::ShowInventoryVedomost()
{
	cout << endl << "========   Inventory statement:   ========" << endl;

	for (auto i = 0; i < list.size(); i++)
	{
		cout << "Name of product: " << list[i].product.GetName() << endl;
		cout << "Count in storage: " << list[i].Count << endl;
	}

	cout << "========================== " << endl << endl;
}

void Storage::Del(Product product, short int Count)
{
	StoragePos newStruct;

	vector<int>::iterator Iter;
	for (auto i = 0; i < list.size(); i++)
	{
		if (list[i].product == product)
		{
			if(list[i].Count >= Count)
				list[i].Count-= Count;
			else if (list[i].Count == 0)
				list.erase(list.begin() + i + 1);
			else if (list[i].Count < Count)
				throw exception("Not enough items in storage");
		}
	}
}

Storage::~Storage()
{
}
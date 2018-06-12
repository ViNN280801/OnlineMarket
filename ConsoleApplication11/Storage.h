#pragma once
#include "Product.h"
#include <vector>
class Storage 
{
private:
	struct StoragePos {
		Product product;
		short int Count;
	};
	vector<StoragePos> list;
public:
	Storage();

	void Add(Product product, short int Count);
	int GetResidueInStorage(Product product);
	void ShowInventoryVedomost();
	void Del(Product product, short int Count);

	virtual ~Storage();
};
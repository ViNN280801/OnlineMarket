#pragma once
#include "Product.h"
#include <vector>
class Order
{
private:
	struct StructOrder {
		Product product;
		short int Count;
		float RealizePrice;
	};
	vector<StructOrder> VectOrder;
public:
	Order();

	void Add(Product product, short int Count);
	void Del(Product product, short int Count);
	void ShowOrder();

	virtual ~Order();
};
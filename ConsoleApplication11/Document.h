#pragma once
#include <iostream>
#include <string>
#include "Product.h" 

using namespace std;

class Document : public Product
{
private:
	Product product;
	short int Count;
	float BuyPrice;
public:
	Document();

	Document(Product product, short int Count, float BuyPrice);
	short int GetCount();
	void ShowDocument();

	virtual ~Document();
};


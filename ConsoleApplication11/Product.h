#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	string Name;
	float BuyPrice;
	float Nacenka;
	float RealizePrice;
	short int Count;
public:
	Product();

	Product(string Name, float BuyPrice, short int Count);
	float GetRealizePrice();
	void SetSalePrice(float salePrice);
	void ShowPriceList();
	string GetName();
	bool operator==(Product obj);
	Product operator=(Product obj);

	virtual ~Product();
};


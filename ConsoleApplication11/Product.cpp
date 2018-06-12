#include "stdafx.h"
#include "Product.h"


Product::Product()
{
	this->BuyPrice = NULL;
	this->RealizePrice = NULL;
	this->Count = NULL;
}

Product::Product(string Name, float BuyPrice, short int Count)
{
	this->Name = Name;
	this->BuyPrice = BuyPrice;
	this->Count = Count;
}

float Product::GetRealizePrice()
{
	return BuyPrice * (1 + Nacenka / 100);
}

void Product::SetSalePrice(float salePrice)
{
	BuyPrice = salePrice;
}

void Product::ShowPriceList()
{
	cout << endl << "========   Price list:   ========" << endl;
	cout << "Name of product: " << Name << endl;
	cout << "Count in storage: " << Count << endl;
	cout << "Sale price = " << BuyPrice << endl;
	cout << "Price markup = " << Nacenka << endl;
	cout << "========================== " << endl;
}

string Product::GetName()
{
	return this->Name;
}

bool Product::operator==(Product obj)
{
	if (this->Name == obj.Name)
		return true;
	else return false;
}

Product Product::operator=(Product obj)
{
	this->Name = obj.Name;
	this->BuyPrice = obj.BuyPrice;
	this->Nacenka = obj.Nacenka;
	this->RealizePrice = obj.RealizePrice;
	this->Count = obj.Count;

	return *this;
}


Product::~Product()
{
}

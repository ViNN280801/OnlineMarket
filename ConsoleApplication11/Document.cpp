#include "stdafx.h"
#include "Document.h"
#include "Product.h"

Document::Document()
{
	this->Count = NULL;
	this->BuyPrice = NULL;
}

Document::Document(Product product, short int Count, float BuyPrice)
{
	this->product = product;
	this->Count = Count;
	this->BuyPrice = BuyPrice;
}

short int Document::GetCount()
{
	return this->Count;
}

void Document::ShowDocument()
{
	cout << endl << "========   Document:   ========" << endl;
	cout << "Name of product: " << product.GetName() << endl;
	cout << "Count in storage: " << Count << endl;
	cout << "Saling price = " << BuyPrice << endl;
	cout << "Amount by document = " << Count * BuyPrice << endl;
	cout << "========================== " << endl;
}

Document::~Document()
{
}

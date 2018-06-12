#include "stdafx.h"
#include "Delievery.h"


Delievery::Delievery()
{
}

Delievery::Delievery(string Adress, float Cash, Order order)
{
	this->Adress = Adress;
	this->Cash = Cash;
	this->order = order;
}

float Delievery::SetCash()
{
	return this->Cash;
}

void Delievery::PrintDelievery()
{
	cout << "======== Delievery: ========" << endl;
	cout << "Cash compose " << SetCash() << "$ " << endl;
	cout << "============================ " << endl << endl;
}

Delievery::~Delievery()
{
}
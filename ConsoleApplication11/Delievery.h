#pragma once
#include <iostream>
#include <string>
#include "Order.h"

using namespace std;

class Delievery
{
private:
	string Adress;
	float Cash;
	Order order;
public:
	Delievery();

	Delievery(string Adress, float Cash, Order order);
	float SetCash();
	void PrintDelievery();

	virtual ~Delievery();
};
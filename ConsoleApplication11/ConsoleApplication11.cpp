#include "stdafx.h"
#include <iostream>
#include <clocale>
#include <ctime>
#include <list>
#include "Storage.h"
#include "Product.h"
#include "Order.h"
#include "Delievery.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(__time64_t(NULL));

	Product PlasticGlass("Plastic glass", 0.25, 100);
	Storage st;
	Order ord;

	st.Add(PlasticGlass, 100);
	st.ShowInventoryVedomost();

	ord.Add(PlasticGlass, 100);
	ord.ShowOrder();

	Delievery delievery("Abay street 68", 1.50, ord);
	delievery.SetCash();
	delievery.PrintDelievery();

    return EXIT_SUCCESS;
}
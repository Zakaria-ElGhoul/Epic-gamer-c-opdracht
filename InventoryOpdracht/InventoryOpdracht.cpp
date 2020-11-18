// InventoryOpdracht.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
int main()
{
    Item* item = new Item("dikke baap", 12, "Zwaard");

    std::cout << item->GetName();
    std::cout << item->GetCoinValue();
    std::cout << item->GetTypeID();
}


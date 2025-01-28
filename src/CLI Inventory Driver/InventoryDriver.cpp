////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Inventory Driver - uses Product, ProductNode and Inventory class
/// to create a command-line interface for managing an inventory.
///
/// @file    InventoryDriver.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include "../Product/Product.h"
#include "../Inventory/Inventory.h"
#include <iostream>

using namespace std;
int main() {
    Product product1(001, "MacBook", "Electronics", "Aisle A1", 2000.00, 297);
    Product product2(006, "Desk", "Furniture", "Aisle G15", 50.00, 34);
    Product product3(012, "Shirt", "Clothing", "Aisle C10", 25.00, 67);

    Inventory inventory;

    inventory.addProduct(product1);
    inventory.addProduct(product2);
    inventory.addProduct(product3);

    // Print the inventory
    cout << "Inventory after adding products:\n";
    inventory.printInventory();

    // Remove a product by ID
    cout << "\nRemoving product with ID 6...\n";
    inventory.removeProduct(006);

    // Print the inventory again
    cout << "\nInventory after removing product with ID 2:\n";
    inventory.printInventory();

    // Try removing a non-existing product
    cout << "\nAttempting to remove non-existing product with ID 999...\n";
    inventory.removeProduct(999);

    return 0;

}


////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Inventory Class - manages a doubly linked list of Product nodes to
/// represent the inventory.
///
/// @file    Inventory.h
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#ifndef INVENTORY_MANAGEMENT_SOFTWARE__INVENTORY_H_
#define INVENTORY_MANAGEMENT_SOFTWARE__INVENTORY_H_

#include <iostream>
#include "../ProductNode/ProductNode.h"

class Inventory {
private:    ///////////////////// Attributes ///////////////////////////////////
    ProductNode* head;
    ProductNode* tail;

public:    //////////////// Constructor & Destructor ///////////////////////////
    /// Constructor to initialize an empty inventory
    Inventory();

    /// Destructor to clean up dynamically allocated memory
    ~Inventory();

///////////////////////////// Public Methods ////////////////////////////////
    /// Add a Product Node
    /// @param product
    void addProduct( const Product& product );

    /// Remove a Product Node
    /// @param productID
    void removeProduct( int productID );

    /// Print entire inventory
    void printInventory( ) const;
}; /// End of Inventory Class
#endif //INVENTORY_MANAGEMENT_SOFTWARE__INVENTORY_H_

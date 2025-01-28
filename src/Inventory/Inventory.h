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

///////////////////////////// Utility Functions ////////////////////////////////
    /// Add a Product Node
    /// @param id
    /// @param name
    /// @param category
    /// @param location
    /// @param price
    /// @param quantity
    void addProduct( const Product& product );

    /// Remove a Product Node
    /// @param productID
    void removeProduct( int productID );

    /// Update the details of a product
    /// @param productId
    /// @param newQuantity
    /// @param newPrice
    void updateProduct(int productId, int newQuantity, double newPrice);

    /// Get a product by its ID
    /// @param productId
    ProductNode* getProduct(int productId);

    /// List all products in the inventory
    void listAllProducts();

    /// Count the total number of products in the inventory
    int countProducts();

    /// Clear all products in the inventory
    void clear();

    /// Search for a product by name
    ProductNode* searchByName(const std::string& name);

    /// Sort the products by price (ascending order)
    void sortByPrice();
}; /// End of Inventory Class
#endif //INVENTORY_MANAGEMENT_SOFTWARE__INVENTORY_H_

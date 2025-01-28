////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// ProductNode Class - defines a Product node that stores a product object.
///
/// @file    ProductNode.h
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#ifndef INVENTORY_MANAGEMENT_SOFTWARE_PRODUCTNODE_H_
#define INVENTORY_MANAGEMENT_SOFTWARE_PRODUCTNODE_H_

#include <iostream>
#include "../Product/Product.h"

class ProductNode {
private:    ///////////////////// Attributes ///////////////////////////////////
    Product      product;  // Product object to store in node
    ProductNode* next;     // Next node in list
    ProductNode* prev;     // Previous node in list

public:    //////////////////// Constructor ////////////////////////////////////
    /// Create a Product Node
    /// @param product
    /// @param next
    /// @param prev
    ProductNode(Product product, ProductNode* next, ProductNode* prev);

public:    /////////////////////// Getters /////////////////////////////////////
    /// Get the product object
    /// @return product
    Product& getProduct();

    /// Get the next product node in list
    /// @return next
    ProductNode* getNext();

    /// Get the previous product node in list
    /// @return prev
    ProductNode* getPrev();

    ////////////////////////////// Setters /////////////////////////////////////
    /// Set the product object
    /// @param newProduct
    void setProduct(Product newProduct);

    /// Set the next product node
    /// @param nextNode
    void setNextNode(ProductNode* nextNode);

    /// Set the previous product node
    /// @param prevNode
    void setPrevNode(ProductNode* prevNode);

    /////////////////////////// Public Methods /////////////////////////////////
    /// Print a product node
    void printProductNode() const;
}; // End of ProductNode class

#endif //INVENTORY_MANAGEMENT_SOFTWARE_PRODUCTNODE_H_

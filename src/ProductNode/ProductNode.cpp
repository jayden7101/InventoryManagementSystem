////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// ProductNode Class - defines a Product node that stores a product object.
///
/// @file    ProductNode.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include "ProductNode.h"

ProductNode::ProductNode( Product      product,
                          ProductNode* next,
                          ProductNode* prev)
        : product(product), next(next), prev(prev)
{
    // Constructor body: initializes the node with the product,
    // next, and prev pointers.
}

Product& ProductNode::getProduct() {
    return product;
}

ProductNode* ProductNode::getNext() {
    return next;
}

ProductNode* ProductNode::getPrev() {
    return prev;
}

void ProductNode::setProduct(Product newProduct) {
    product = newProduct;
}

void ProductNode::setNextNode(ProductNode* nextNode) {
    next = nextNode;
}

void ProductNode::setPrevNode(ProductNode* prevNode) {
    prev = prevNode;
}

////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Inventory Class - manages a doubly linked list of Product nodes to
/// represent the inventory.
///
/// @file    Inventory.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Inventory.h"

Inventory::Inventory() : head(nullptr), tail(nullptr){ }

Inventory::~Inventory() {
    // Clean up the linked list
    while (head != nullptr) {
        ProductNode* temp = head;
        head = head->getNext();
        delete temp;
    }
}

void Inventory::addProduct( const Product& product ) {
   if (!head) {
       head = tail = new ProductNode( product, nullptr, nullptr);
   } else {
       ProductNode *newNode = new ProductNode(product, nullptr, tail);
       tail->setNextNode(newNode);
       newNode->setPrevNode(tail);
       tail = newNode;
   }
}

void Inventory::removeProduct(int productID) {
    // Start from the head of the list
    ProductNode* current = head;

    // Traverse the list to find the node with the matching productID
    while (current != nullptr) {
        if (current->getProduct().getID() == productID) {
            // Case 1: Removing the head node
            if (current == head) {
                head = current->getNext(); // Move the head to the next node
                if (head != nullptr) {
                    head->setPrevNode(nullptr); // Set new head's previous to nullptr
                } else {
                    tail = nullptr; // If head becomes null, the list is now empty
                }
            }
                // Case 2: Removing the tail node
            else if (current == tail) {
                tail = current->getPrev(); // Move the tail to the previous node
                if (tail != nullptr) {
                    tail->setNextNode(nullptr); // Set new tail's next to nullptr
                }
            }
                // Case 3: Removing a node in the middle
            else {
                ProductNode* prevNode = current->getPrev();
                ProductNode* nextNode = current->getNext();

                prevNode->setNextNode(nextNode);
                nextNode->setPrevNode(prevNode);
            }

            // Delete the node and break out of the loop
            delete current;
            std::cout << "Product with ID " << productID << " removed successfully.\n";
            return;
        }

        // Move to the next node
        current = current->getNext();
    }

    // If no product with the given ID is found
    std::cout << "Product with ID " << productID << " not found.\n";
}

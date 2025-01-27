////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// ProductNode Class - defines a Product node that stores a product object.
/// Tests to run for ProductNode class
///
/// @file    test_product_node.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include <gtest/gtest.h>
#include "../src/ProductNode/ProductNode.h"
#include "../src/Product/Product.h"

// Test setup: create some example products and nodes.
Product product1(1, "Product 1", "Category A", "Location A", 19.99, 10);
Product product2(2, "Product 2", "Category B", "Location B", 29.99, 20);
Product product3(3, "Product 3", "Category C", "Location C", 39.99, 30);

// Initialize nodes with next and prev set to nullptr initially.
ProductNode node1(product1, nullptr, nullptr);
ProductNode node2(product2, nullptr, &node1); // node2's prev is node1
ProductNode node3(product3, &node2, nullptr); // node3's next is node2

TEST(ProductNodeTest, ConstructorTest) {
    // Manually link nodes in the test before checking them
    node1.setNextNode(&node2);  // Manually link node1 to node2
    node2.setPrevNode(&node1);  // Manually link node2 to node1 (for prev pointer)
    node2.setNextNode(&node3);  // Manually link node2 to node3 (for next pointer)
    node3.setPrevNode(&node2);  // Manually link node3 to node2 (for prev pointer)

    // Test constructor and getter for product
    EXPECT_EQ(node1.getProduct().getID(), 1);
    EXPECT_EQ(node2.getProduct().getName(), "Product 2");
    EXPECT_EQ(node3.getProduct().getPrice(), 39.99);

    // Check next and previous pointers
    EXPECT_EQ(node2.getPrev(), &node1);  // node2's prev should point to node1
    EXPECT_EQ(node1.getNext(), &node2);  // node1's next should point to node2
    EXPECT_EQ(node3.getNext(), nullptr); // node3's next should be nullptr
    EXPECT_EQ(node2.getNext(), &node3);  // node2's next should point to node3
    EXPECT_EQ(node3.getPrev(), &node2);  // node3's prev should point to node2
}

TEST(ProductNodeTest, SettersTest) {
    // Set new products and nodes
    Product newProduct(4, "Product 4", "Category D", "Location D", 49.99, 40);
    node1.setProduct(newProduct);
    node2.setNextNode(&node3);
    node3.setPrevNode(&node2);

    // Test if the setters work correctly
    EXPECT_EQ(node1.getProduct().getID(), 4);
    EXPECT_EQ(node2.getNext(), &node3);
    EXPECT_EQ(node3.getPrev(), &node2);
}

TEST(ProductNodeTest, SetPrevAndNextTest) {
    // Test setting next and prev node links
    node1.setNextNode(&node2);
    node2.setPrevNode(&node1);

    EXPECT_EQ(node1.getNext(), &node2);
    EXPECT_EQ(node2.getPrev(), &node1);
}

TEST(ProductNodeTest, ProductGetterTest) {
    // Ensure we can retrieve the correct product from the node
    EXPECT_EQ(node2.getProduct().getID(), 2);
    EXPECT_EQ(node3.getProduct().getName(), "Product 3");
}
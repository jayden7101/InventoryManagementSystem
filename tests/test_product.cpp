////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Product Class - defines a product
/// Tests to run for Product class
///
/// @file    test_product.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include <gtest/gtest.h>
#include "../src/Product/Product.h"

// Test Fixture for Product class
class ProductTest : public ::testing::Test {
protected:
    // Set up any necessary objects or variables for the tests
    Product* product;

    // Called before each test
    void SetUp() override {
        // Set up a valid product to test with
        product = new Product(1, "Laptop", "Electronics", "Aisle 3", 999.99, 10);
    }

    // Called after each test
    void TearDown() override {
        delete product;  // Clean up dynamically allocated object
    }
};

// Test the constructor with valid input
TEST_F(ProductTest, ConstructorValidInputs) {
    EXPECT_EQ(product->getID(), 1);
    EXPECT_EQ(product->getName(), "Laptop");
    EXPECT_EQ(product->getCategory(), "Electronics");
    EXPECT_EQ(product->getLocation(), "Aisle 3");
    EXPECT_EQ(product->getPrice(), 999.99);
    EXPECT_EQ(product->getQuantity(), 10);
}

// Test constructor with invalid price
TEST_F(ProductTest, ConstructorInvalidPrice) {
    EXPECT_THROW(Product(1, "Laptop", "Electronics", "Aisle 3", -100.0, 10), std::invalid_argument);
}

// Test constructor with invalid quantity
TEST_F(ProductTest, ConstructorInvalidQuantity) {
    EXPECT_THROW(Product(1, "Laptop", "Electronics", "Aisle 3", 999.99, -10), std::invalid_argument);
}

// Test the setter for price with valid input
TEST_F(ProductTest, SetPriceValid) {
    product->setPrice(1299.99);
    EXPECT_EQ(product->getPrice(), 1299.99);
}

// Test the setter for price with invalid input
TEST_F(ProductTest, SetPriceInvalid) {
    EXPECT_THROW(product->setPrice(-200.0), std::invalid_argument);
}

// Test the setter for quantity with valid input
TEST_F(ProductTest, SetQuantityValid) {
    product->setQuantity(20);
    EXPECT_EQ(product->getQuantity(), 20);
}

// Test the setter for quantity with invalid input
TEST_F(ProductTest, SetQuantityInvalid) {
    EXPECT_THROW(product->setQuantity(-5), std::invalid_argument);
}

// Test setters for other fields (name, category, location)
TEST_F(ProductTest, SetName) {
    product->setName("Smartphone");
    EXPECT_EQ(product->getName(), "Smartphone");
}

TEST_F(ProductTest, SetCategory) {
    product->setCategory("Mobile");
    EXPECT_EQ(product->getCategory(), "Mobile");
}

TEST_F(ProductTest, SetLocation) {
    product->setLocation("Aisle 5");
    EXPECT_EQ(product->getLocation(), "Aisle 5");
}

// Test the getter for ID
TEST_F(ProductTest, GetID) {
    EXPECT_EQ(product->getID(), 1);
}
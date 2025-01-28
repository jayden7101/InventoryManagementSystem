////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Product Class - defines a product
///
/// @file    Product.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include "Product.h"

using namespace std;

Product::Product(const int     id,
                 const string& name,
                 const string& category,
                 const string& location,
                 const double  price,
                 const int     quantity)
        : id(id), name(name), category(category), location(location),
           price(price), quantity(quantity)
{
    if (price < 0) {
        throw std::invalid_argument("Price cannot be negative");
    }
    if (quantity < 0) {
        throw std::invalid_argument("Quantity cannot be negative");
    }
}

int Product::getID() const noexcept{
    return id;
}

const string& Product::getName() const noexcept {
    return name;
}

const string& Product::getCategory() const noexcept {
    return category;
}

const string& Product::getLocation() const noexcept {
    return location;
}

double Product::getPrice() const noexcept {
    return price;
}

int Product::getQuantity() const noexcept{
    return quantity;
}

void Product::setID(const int newID) {
    id = newID;
}

void Product::setName(const std::string& newName) {
    name = newName;
}

void Product::setCategory(const std::string& newCategory) {
    category = newCategory;
}

void Product::setLocation(const std::string& newLocation) {
    location = newLocation;
}

void  Product::setPrice(const double newPrice) {
    if (newPrice < 0) {
        throw std::invalid_argument("Price cannot be negative.");
    }
    price = newPrice;
}

void Product::setQuantity(const int newQuantity) {
    if (newQuantity < 0) {
        throw std::invalid_argument("Quantity cannot be negative.");
    }
    quantity = newQuantity;
}
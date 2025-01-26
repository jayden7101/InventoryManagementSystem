////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Product Class - defines a product
///
/// @file    Product.cpp
/// @author Jayden Ferreira <jayden71@hawaii.edu>
////////////////////////////////////////////////////////////////////////////////
#include "Product.h"

using namespace std;

Product::Product(const int          id,
                 const std::string& name,
                 const std::string& category,
                 const std::string& location,
                 const double       price,
                 const int          quantity)
{
    /// @todo add constructor code
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
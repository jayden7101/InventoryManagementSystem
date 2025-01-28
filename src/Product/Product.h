////////////////////////////////////////////////////////////////////////////////
//                       Inventory Management Software
/// Product Class - defines a product
///
/// @file    Product.h
/// @author Jayden Ferreira
////////////////////////////////////////////////////////////////////////////////
#ifndef INVENTORY_MANAGEMENT_SOFTWARE_SRC_PRODUCT_H_
#define INVENTORY_MANAGEMENT_SOFTWARE_SRC_PRODUCT_H_

#include <string>
#include <sstream>

class Product {
private:    ///////////////////// Attributes ///////////////////////////////////
    int         id;        // Product's unique id number
    std::string name;      // Name that describes the product
    std::string category;  // Product category
    std::string location;  // Product location
    double      price;     // Product price
    int         quantity;  // Quantity of product currently in stock

public:    //////////////////// Constructor ////////////////////////////////////
    /// Create a Product with all the proper attributes.
    /// @param id
    /// @param name
    /// @param category
    /// @param location
    /// @param price
    /// @param quantity
    Product(const int          id,
            const std::string& name,
            const std::string& category,
            const std::string& location,
            const double       price,
            const int          quantity
    );

public:    /////////////////////// Getters /////////////////////////////////////
    /// Get the Product ID
    /// @return Product ID
    int getID()                      const noexcept;

    /// Get the Product Name
    /// @return Product Name
    const std::string& getName()     const noexcept;

    /// Get the Product Category
    /// @return Product Category
    const std::string& getCategory() const noexcept;

    /// Get the Product Location
    /// @return Product Location
    const std::string& getLocation() const noexcept;

    /// Get the Product Price
    /// @return Product Price
    double getPrice()                const noexcept;

    /// Get the Product Quantity
    /// @return Product Quantity
    int getQuantity()                const noexcept;

    ////////////////////////////// Setters /////////////////////////////////////
    /// Set the Product Id
    /// @param newID the new ID for the product
    void setID(const int newID);

    /// Set the Product Name
    /// @param newName the new name for the product
    void setName(const std::string& newName);

    /// Set the Product Category
    /// @param newCategory the new category for the product
    void setCategory(const std::string& newCategory);

    /// Set the Product Location
    /// @param newLocation the new location for the product
    void setLocation(const std::string& newLocation);

    /// Set the Product Price
    /// @param newPrice the new price for the product
    void setPrice(const double newPrice);

    /// Set the Product Quantity
    /// @param newQuantity the new quantity for the product
    void setQuantity(const int newQuantity);

    /////////////////////////// Public Methods /////////////////////////////////
    /// Represent a product object as a string
    std::string productToString() const;
}; // End of Product Class

#endif //INVENTORY_MANAGEMENT_SOFTWARE_SRC_PRODUCT_H_
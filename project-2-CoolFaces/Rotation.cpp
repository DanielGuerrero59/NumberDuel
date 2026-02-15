/**
 * @file Rotation.cpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief This file contains the declaration of the Rotation class, 
 * representing a general rotation.
 */

#include "Rotation.hpp"
#include <string> 

/**
* @param type: The rotation type
* @post: Initializes type_ to the provided value
*/
Rotation::Rotation(std::string type) : type_(type) {}

/**
* @param type: The rotation type
* @post: Initializes type_ to the provided value
*/
std::string Rotation::getType() const { 
    return type_;
}


/**
* @brief Virtual destructor to ensure proper cleanup of derived classes.
*/

Rotation::~Rotation() {}
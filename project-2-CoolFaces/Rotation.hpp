/**
 * @file Rotation.hpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief This file contains the declaration of the Rotation class, 
 * representing a general rotation.
 */

#pragma once
#include "Vector3D.hpp"
#include <iostream> 
#include <string>

class Rotation { 

public: 


/**
* @param type: The rotation type
* @post: Initializes type_ to the provided value
*/
Rotation(std::string type); 

/**
* @return: The value of type_
* @note: This function should be marked const!
*/
std::string getType() const; 


/**
* @brief Virtual destructor to ensure proper cleanup of derived classes.
(SIDENOTE): MUST be virtual to enable RUNTIME POLYMORPHISM. 
Without virtual compiler only looks at pointer type. 
With virtual, looks at instance

*/

virtual ~Rotation(); 

protected: 

std::string type_;


};
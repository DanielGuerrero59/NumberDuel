/**
 * @file EulerRotation.hpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief This file contains the declaration of the QuaternionRotation class, 
 * representing a  4D mathematical representation (w,x,y,z) that avoids gimbal lock (Used in industry-standard engines).
 */

#pragma once 
#include "Rotation.hpp"

class QuaternionRotation : public Rotation { 



public:
/**
* @post: Initializes w_, x_, y_, and z_ to 0.0
* Sets type_ to "QUATERNION"
*/
QuaternionRotation(); 



/**
* @param w: The w component
* @param x: The x component
* @param y: The y component
* @param z: The z component
* @post: Initializes w_, x_, y_, and z_ to the provided values
* Sets type_ to "QUATERNION"
*/
QuaternionRotation(double w, double x, double y, double z); 


/**
* @return: The value of w_
* @note: This function should be marked const!
*/
double getW() const; 


/**
* @return: The value of x_
* @note: This function should be marked const!
*/
double getX() const; 


/**
* @return: The value of y_
* @note: This function should be marked const!
*/
double getY() const; 



/**
* @return: The value of z_
* @note: This function should be marked const!
*/
double getZ() const; 


private: 
double w_; 
double x_; 
double y_; 
double z_; 



};
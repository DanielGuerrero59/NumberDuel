/**
 * @file EulerRotation.hpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief This file contains the declaration of the AxisAngle class, 
 * representing a natural rotation by a specific angle around a single vector axis.
 */

#pragma once
#include "Rotation.hpp"

class AxisAngleRotation : public Rotation { 

public: 

/**
* @post: Initializes axis_ to Vector3D(0.0, 0.0, 0.0) and angle_ to 0.0
* Sets type_ to "AXIS_ANGLE"
*/
AxisAngleRotation(); 


/**
* @param axis: The rotation axis as a Vector3D
* @param angle: The rotation angle
* @post: Initializes axis_ and angle_ to the provided values
* Sets type_ to "AXIS_ANGLE"
*/
AxisAngleRotation(Vector3D axis, double angle); 


/**
* @return: The value of axis_
* @note: This function should be marked const!
*/
Vector3D getAxis() const; 

/**
* @return: The value of angle_
* @note: This function should be marked const!
*/
double getAngle() const; 



private: 

Vector3D axis_; 
double angle_;
};
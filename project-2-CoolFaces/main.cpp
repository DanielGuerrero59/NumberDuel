/**
 * @file EulerRotation.hpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief This file contains the local testing for the classes declared and implemented in previous files, 
 */

#include "Vector3D.hpp"
#include "Rotation.hpp"
#include "EulerRotation.hpp"
#include "AxisAngleRotation.hpp"
#include "QuaternionRotation.hpp"
#include <iostream> 
#include <string>


int main() { 



EulerRotation myEuler(45.0, 30.0, 60.0);

std::cout << "Type: " << myEuler.getType() << std::endl; 
std::cout << "Roll: " << myEuler.getRoll() << std::endl; 


Vector3D myVector(1.0, 0.0, 0.0); 

AxisAngleRotation myAxis(myVector, 90.0); 

std::cout << "Type: " << myAxis.getType() << std::endl; 

QuaternionRotation myRotation(1.0, 0.0, 0.0,0.0); 

std::cout << "Type: " << myRotation.getType() << std::endl; 
}
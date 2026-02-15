#include "Vector3D.hpp"   // header that tells compiler to look at .hpp first before, since .hpp is the blueprint 
#include <iostream>
#include <cmath> 
#include <iomanip>  // library which assists in controlling how things look when printed, especially floats 



    // @pre: Value must be from our class attribute which was indirectly customized through our constructor. 
    // @param: None 
    // @post: Returns the x_ private attribute
    double Vector3D::getX() const { 
    return x_; 

    }


    // @pre: must be a valid integer or float value 
    // @param: Double value
    // @post: set our private attribute equal to the parameter. 
    void Vector3D::setX(double x) { 
     this->x_ = x;

    }
  
    
    // @pre: Value must be from our class attribute which was indirectly customized through our constructor. 
    // @param: None 
    // @post: Returns the Y_ private attribute
     double Vector3D::getY() const { 
        return y_; 

    }

    
    // @pre: must be a valid integer or float value 
    // @param: Double value
    // @post: set our private attribute equal to the parameter. 
    void Vector3D::setY(double y) { 
        this->y_ = y; 

    } 


    // @pre: Value must be from our class attribute which was indirectly customized through our constructor. 
    // @param: None 
    // @post: Returns the Z_ private attribute
     double Vector3D::getZ() const {
        return z_; 
    }


    // @pre: must be a valid integer or float value 
    // @param: Double value
    // @post: set our private attribute equal to the parameter. 
    void Vector3D::setZ(double z) { 
        this->z_ = z;

    }


    // @pre: all three attributes must have valid values 
    // @param: none 
    // @post: returns the magnitude determined from the three attributes 
    double Vector3D::calculateMagnitude() const { 
        return sqrt(pow(this->x_,2) + pow(this->y_,2) + pow(this->z_,2));

    }


    // @pre: magnitude must be above 0 in order for an actual value to be returned
    // @param: none 
    // @post: Creates a unit vector for each given attribute 
    void Vector3D::normalize() { 
        double current_magnitude = Vector3D::calculateMagnitude(); 

        if(Vector3D::calculateMagnitude() > 0) { 

            this->x_ /= current_magnitude;
            this->y_ /= current_magnitude; 
            this->z_ /= current_magnitude;
        }
        else { 
            return; 
        }

    }


    // @pre: all attributes must be valid integer/float values. 
    // @param: none 
    // @post: Prints out a display of the vector in a format with value to 2 decimal places. 
    void Vector3D::display() { 
        std::cout << "Vector[" << std::fixed << std::setprecision(2) << this->x_ << ", " << std::fixed << std::setprecision(2) <<   this->y_ << ", " << std::fixed << std::setprecision(2) <<  this->z_ << "]\n"; 
        
    }
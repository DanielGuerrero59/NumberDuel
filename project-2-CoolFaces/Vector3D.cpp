/**
 * @file Vector3D.cpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief Implementation of the Vector3D class methods.
 */

#include "Vector3D.hpp"
#include <iomanip>

/**
 * @post: Initializes x_, y_, and z_ to 0.0.
 */
Vector3D::Vector3D() : x_(0.0), y_(0.0), z_(0.0) {}

/**
 * @param x, y, z: Values to initialize the vector.
 * @post: Initializes x_, y_, and z_ to the provided values.
 */
Vector3D::Vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {}

// Accessors and Mutators
double Vector3D::getX() const { return x_; }
void Vector3D::setX(double x) { x_ = x; }

double Vector3D::getY() const { return y_; }
void Vector3D::setY(double y) { y_ = y; }

double Vector3D::getZ() const { return z_; }
void Vector3D::setZ(double z) { z_ = z; }

/**
 * @return: The magnitude calculated via the Pythagorean theorem for 3D.
 */
double Vector3D::calculateMagnitude() const {
    return std::sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
}

/**
 * @post: Normalizes the vector components to range [0, 1].
 */
void Vector3D::normalize() {
    double mag = calculateMagnitude();
    if (mag > 0) {
        x_ /= mag;
        y_ /= mag;
        z_ /= mag;
    }
}

/**
 * @post: Formats the output for console display.
 */
void Vector3D::display() const {
    std::cout << "Vector[" << std::fixed << std::setprecision(2) 
              << x_ << ", " << y_ << ", " << z_ << "]" << std::endl;
}
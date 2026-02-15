#pragma once // when other files call .hpp file, pragma once ensures it is only read once and not multiple times 


class Vector3D { 
    private: 

    double x_; // place an underscore to be aware these are internal private variables 
    double y_; 
    double z_;

    public: 
    // default constructor 
    // @pre: None 
    // @param: None 
    // @post: A vector 3D object is created with the initalized values of 0.0 
     Vector3D() { 
        x_ = 0.0; 
        y_ = 0.0; 
        z_ = 0.0; 

    }




    // Parameterized Constructor 
    // @pre: Must be an integer or float value 
    // @param: Takes in an integer/double value 
    // @post: Vector3D object created with the customized values of the user 
     Vector3D(double x_, double y_, double z_) { 
        this->x_ = x_; 
        this->y_ = y_; 
        this->z_ = z_; 
    }

    // declare all of the functions necessary for our cpp file 

    // @pre: Value must be from our class attribute which was indirectly customized through our constructor. 
    // @param: None 
    // @post: Returns the x_ private attribute
    double getX() const; 




    // @pre: must be a valid integer or float value 
    // @param: Double value
    // @post: set our private attribute equal to the parameter. 
    void setX(double x); 




    // @pre: Value must be from our class attribute which was indirectly customized through our constructor. 
    // @param: None 
    // @post: Returns the y_ private attribute
     double getY() const;
      

     /* (PERSONAL SIDE NOTE): practice to put const at the end of a function, as it protects the objects internal data 
      from being changed within the function, whatever is inside is non-mutable,*/
    

    // (PERSONAL SIDE NOTE) putting it in front of the function is essentially useless as we control if the variables inside stay constant. 




    // @pre: must be a valid integer or float value 
    // @param: Double value
    // @post: set our private attribute equal to the parameter. 
    void setY(double y);

    



    // @pre: Value must be from our class attribute which was indirectly customized through our constructor. 
    // @param: None 
    // @post: Returns the z_ private attribute
     double getZ() const;

    



    // @pre: must be a valid integer or float value 
    // @param: Double value
    // @post: set our private attribute equal to the parameter. 
    void setZ(double z);




    // @pre: all three attributes must have valid values 
    // param: none 
    // @post: returns the magnitude determined from the three attributes 
    double calculateMagnitude() const; 



    
    // @pre: magnitude must be above 0 in order for an actual value to be returned
    // @param: none 
    // @post: Creates a unit vector for each given attribute 
    void normalize(); 




    // @pre: all attributes must be valid integer/float values. 
    // @param: none 
    // @post: Prints out a display of the vector in a format with value to 2 decimal places. 
    void display(); 



};

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix{
    public: 
    int myArray[3][3];

    Matrix();

    void randomFill();

    Matrix operator*(Matrix& rhs);

    bool operator==(Matrix& rhs);

    void toString();
    

};

#endif
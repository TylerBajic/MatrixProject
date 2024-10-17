#include "Matrix.h"

Matrix Matrix::operator*(Matrix& rhs){
    Matrix result;
    for(int i =0; i<3; ++i){
        for(int j =0; j<3; ++j){
            result.myArray[i][j] = 0;
            for(int k =0; k<3;++k){
                result.myArray[i][j] += this->myArray[i][k] * rhs.myArray[k][j];
            }
        }
    }
    return result;
}

bool Matrix::operator==(Matrix& rhs){
    for(int i =0; i<3; ++i){
        for(int j =0; j<3; ++j){
            if(this->myArray[i][j] != rhs.myArray[i][j]){
                return false;
            }
        }
    }
    return true;
}
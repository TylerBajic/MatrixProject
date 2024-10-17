#include "Matrix.h"

Matrix::Matrix(){}

void Matrix:: randomFill(){
    for(int i = 0; i<3; ++i){
        for(int j =0; j<3; ++j){
            myArray[i][j] = rand()%100;
        }
    }
}
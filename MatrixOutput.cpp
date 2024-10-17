#include "Matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Matrix::toString(){
    for(int i = 0; i<3; ++i){
        for(int j =0; j<3; ++j){
            cout<< setw(4)<<myArray[i][j]<<" ";
        }
        cout<<endl;
    }
}
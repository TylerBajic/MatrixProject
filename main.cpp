#include <iostream>
#include "Matrix.h"
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    Matrix matrix1;
    Matrix matrix2;

    matrix1.randomFill();
    matrix2.randomFill();

    cout<<"Matrix 1: "<< endl;
    matrix1.toString();
    cout<<endl;

    cout<<"Matrix 2: "<< endl;
    matrix2.toString();
    cout<<endl;

    Matrix resultMatrix = matrix1 * matrix2;
    cout<<"Result of Matrix 1 * Matrix 2:"<< endl;
    resultMatrix.toString();
    cout<<endl;

    bool areEqual = matrix1 == matrix2;
    cout<<"Matrix 1 and Matrix 2 are " << (areEqual ? "equal." : "not equal.")<<endl;

    return 0;
}

final: main.o Matrix.o MatrixOperators.o MatrixOutput.o
	g++ main.o Matrix.o MatrixOperators.o MatrixOutput.o -o final

main.o: main.cpp 
	g++ -c main.cpp

Matrix.o: Matrix.cpp 
	g++ -c Matrix.cpp

MatrixOperators.o: MatrixOperators.cpp 
	g++ -c MatrixOperators.cpp

MatrixOutput.o: MatrixOutput.cpp 
	g++ -c MatrixOutput.cpp
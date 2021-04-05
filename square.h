#ifndef SQUARE_H
#define SQUARE_H


//cody webb

const int MAX_SIZE = 10;
class Square {
 int size;
 int square[MAX_SIZE][ MAX_SIZE];
public:
//create new square of given size
 Square(int size)
 {
 this->size = size;
 }
//return the sum of the values in the given row
 int sumRow(int);
//return the sum of the values in the given column
 int sumCol(int);
//return the sum of the values in the main diagonal
 int sumMainDiag();
//return the sum of the values in the other ("reverse") diagonal
 int sumOtherDiag();
// return true if the square is magic (all rows, cols, and diagonals have
// same sum), false otherwise
 bool magic();
//read info into the square from the standard input.
 void readSquare();
//print the contents of the square, neatly formatted
 void printSquare();
};




#endif

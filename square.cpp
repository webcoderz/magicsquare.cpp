#include<iostream>
#include<iomanip>
using std::cout;
using namespace std;

#include "square.h"

//cody webb


//return the sum of the values in the given row
   int Square::sumRow(int row){
     int total = 0;
     for(int column=0;column<size;column++){
        total = total + square[row][column];
     }
     return total;
  }
//return the sum of the values in the given column
   int Square::sumCol(int column){
     int total = 0;
     for(int row=0;row<size;row++){
        total = total + square[row][column];
     }
     return total;
  }
//return the sum of the values in the main diagonal
   int Square::sumMainDiag(){
     int total = 0;
     for(int i=0;i<size;i++){
        total = total + square[i][i];
     }
     return total;
  }
//return the sum of the values in the other ("reverse") diagonal
   int Square::sumOtherDiag(){
     int total = 0;
     int row = 0, column = size-1;
     while(column>=0){
        total = total + square[row++][column--];
     }
     return total;
  }
  // return true if the square is magic (all rows, cols, and diagonals have // same sum), false otherwise
  bool Square::magic(){
     int sum = sumMainDiag();
     if(sum != sumOtherDiag()) return false;
     for(int row = 0; row<size; row++){
        if(sum != sumRow(row)) return false;
     }
     for(int column = 0; column<size; column++){
        if(sum != sumCol(column)) return false;
     }
     return true;
  }
//read info into the square from the standard input.
   void Square::readSquare(){
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           cin>>square[i][j];
        }
     }
  }
//print the contents of the square, neatly formatted
   void Square::printSquare(){
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           cout<<setw(3)<<square[i][j];
        }
        cout<<endl;
     }
     cout<<endl;
  }

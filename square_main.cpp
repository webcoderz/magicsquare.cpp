#include "square.h"
#include<iostream>
#include<iomanip>
using namespace std;
using std::cout;



//cody webb
int main(){
  int size;
  cout<<"enter size: ";
  cin>>size;
  Square square(size);
  cout<<"enter values to fill square one by one left to right and then press ENTER \n";
  square.readSquare();
  square.printSquare();
  if(!square.magic()){
     cout<<"not magic square\n";
  }
  else{
     cout<<"magic square\n";
  }
  return 0;
}

#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
  int previous = 1; //Store the previous calculated value to add it to the last one
  int total = 0; //Holds the sum of the even-values from Fibonacci sequence
  int tmp;
  
  //Do the Fibonacci sequence and add the even elements to the total as we go
  for(int actual=1; actual <= 4000000 ; actual += tmp){
    tmp = previous;
    previous = actual;

    if (actual%2 == 0) total += actual;
  }
  
  //Finally, print the result
  cout << total << endl;

  return 0;
}

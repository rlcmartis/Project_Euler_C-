#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
  int total = 0; //Variable storing the total sum

  //Iterate from the first known number divisible by either 3 or 5, print and store 
  for(int i=3; i<1000; i++){
    if(i%3==0 || i%5==0){
      cout << i << endl;
      total += i;
    }
  }
  
  //Finally print the result and exit
  cout << "The total of the sum is " << total << ".\n";

  return 0;
}

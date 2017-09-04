#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
  int smallestNumber = 0;

  //Take the largest number in the list of factors and count in multiples of that number
  //Since 20=2x2x5, we never have to check if 2 and 5 divides that number since we know they will
  //The same happens to 6x3=9x2=18, 8x2=16, 3x5=15, 7x2=14, 4x3=12 and 2x5=10. Therefore,
  //we just need to check for 19, 18, 17, 16, 15, 14, 13, 12 and 11, because the rest is given.
  for(int i=20; !smallestNumber; i+=20){
    if(i%19==0 && i%18==0 && i%17==0 && i%16==0 &&
       i%15==0 && i%14==0 && i%13==0 && i%12==0 &&
       i%11==0) smallestNumber = i;
  }

  //Finally, we print the result
  cout << smallestNumber << endl;

  return 0;
}

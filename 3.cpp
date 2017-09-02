#include<iostream>
#include<cmath>
using namespace std;

//Based on the supposition that the parameter is at least odd
long int previousPrime(long int prime){
  long int previous = prime - 2;

  //Primes dividing a number are below the square root of it
  //therefore we start from 3 because 'previous' is odd and
  //finish at the ceiling of sqrt(previous)
  for(long int i=3; i<=ceil(sqrt(previous)); i+=2){
    //If a number divides 'previous', then is not prime, so 
    //we use recursion with it
    if(previous%i == 0) return previousPrime(previous);
  }

  return previous;
}

int main(int argc, char *argv[]){
  long int number = 600851475143;
  
  //There are no prime factors greater than sqrt(number)
  //nor smaller than 3 (for an odd number)
  for(long int i=ceil(sqrt(number)); i>2; i=previousPrime(i)){
    if(number%i == 0){
      cout << i << endl;
      break;
    }
  }

  return 0;
}

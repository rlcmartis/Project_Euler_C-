#include<iostream>
#include<string>
using namespace std;

//Takes two numbers and tells if the product of those is a palindrome or not
bool isPalindrome(int a, int b){
  string c = to_string(a*b);
  int endpoint = c.length()-1;
  
  for(int startpoint=0; startpoint <= endpoint; startpoint++){
    if(c[startpoint] != c[endpoint]){
      //cout << startpoint << " is not equal to " << endpoint << " .. " << c << endl;
      return false;
    }
    endpoint--;
  }
  
  return true;
}

int main(int argc, char *argv[]){
  //We are gonna look for every possible product of numbers of three digits
  //and store the largestPalindrome at the moment
  int largestPalindrome = 0; 
  for(int i=999; i>99; i--){
    for(int j=999; j>=i; j--){
      if(isPalindrome(i,j)){
        if(largestPalindrome < i*j) largestPalindrome = i*j;
      } 
    }
  }
  
  //Finally, print the result
  cout << largestPalindrome << endl;

  return 0;
}

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int reversenumb(int n){
  int rev=0;
  while(n>0){
    int rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
  }
  return rev;
}
int main(){
  int n;
  cout<<"Enter the number to be palindrom";
  cin>>n;
  int num2=reversenumb(n);
  if(n==num2){
    cout<<"Number is palindrome";
  }
  else{
    cout<<"Number is not palindrome";
  }
}

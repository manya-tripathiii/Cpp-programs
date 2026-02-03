# include<iostream>
#include<cmath>
using namespace std;
int gcd_hcf(int n1,int n2){
  int mini=min(n1,n2);
  int gcd;
  for(int i=1;i<=mini;i++){
    if(n1%i==0 && n2%i==0){
      gcd=i;
    }
  }
  return gcd;
}
int main(){
  int n1,n2;
  cout<<"Enter the number 1: ";
  cin>>n1;
  cout<<"Enter the number 2: ";
  cin>>n2;
  int num1=gcd_hcf(n1,n2);
  cout<<"GCD/HCF= "<<num1;
}

//Time complexity = O(min(n1,n2))

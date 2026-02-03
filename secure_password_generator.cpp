# include<iostream>
# include <string>
#include <cmath>
using namespace std;
bool primenumber(int n){
  if (n<=1){
    return false;
  }
  for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
      return false;
    }
  return true;
  }
}

bool sumofdigits(int n) {
    int total = 0;
    while (n > 0) {
        total += n % 10;  
        n /= 10;          
    }
    return (total % 3 != 0);  
}

bool check(int n){
  if((to_string(n).length())==3){
    return true;
  }
  return true;
}

bool arm(int n){
  int total=0;
  string str1=to_string(n);
  int power=str1.length();
  for(int i=0;i<str1.length();i++){
    total+=pow(str1[i]-'0',power);
  }
  if(total==n){
    return false;
  }
  return true;
}

int main(){
  bool flag= false;
  int n;
  while(flag==false){
    cout<<"Enter the password";
    cin>>n;
    if((primenumber(n)&&sumofdigits(n)&&check(n)&&arm(n))==true){
      flag=true;
    }
    else{
      flag=false;
    }
  }
  cout<<"Password accepted: "<<n;
}



#include<iostream>
using namespace std;
int charHash(string s,char c){
  int maxval,i;
  maxval=(int)s[0];
  for(i=0;i<s.length();i++){
    if(maxval<(int)s[i]){
      maxval=int(s[i]);
    }
    else{
      maxval=(int)s[i];
    }
  }
  int hash[maxval+1]={0};
  if((int)c>maxval){
    cout<<"Element not found"<<endl;
  }
  else{
    for(i=0;i<s.length();i++){
      hash[(int)s[i]]++;
    }
    cout<<"The frequency of the character is: "<<hash[(int)c]<<endl;
  }
}
int main(){
  string s="helloworbld";
  char c='z';
  charHash(s,c);
}
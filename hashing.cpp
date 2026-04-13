#include<iostream>
using namespace std;
int main(){
  int n,q,flag,i;
  cout<<"Enter the number of elements in the array";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cout<<"Enter the elements of array";
    cin>>arr[i];
  }
  int hash[13]={0};
  for(i=0;i<n;i++){
    hash[arr[i]]+=1;
  }
  flag=1;
  while(flag==1){
    cout<<"Enter the elements of which you want frquency count";
    cin>>q;
    cout<<"The frequency of the element is: "<<hash[q]<<endl;
    cout<<"Do you want to continue?(1/0)";
    cin>>flag;
  }
}
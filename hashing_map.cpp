#include<iostream>
#include<vector>
#include<map>
using namespace std;
int hashmapp(int arr[], int n,int c){
  int i;
  map<int, int> hash;
  for(i=0;i<n;i++){
    hash[arr[i]]++;
  }
  cout<<"Size:"<<hash[arr[c]]<<endl;
}
int main(){
  int n,i,c;
  cout<<"Enter the number of elements in the array";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cout<<"Enter the elements of array";
    cin>>arr[i];
  }
  cout<<"Enter the element of which frequency count you want";
  cin>>c; 
  hashmapp(arr,n,c);
}
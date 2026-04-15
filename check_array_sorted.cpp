#include<iostream>
#include<vector>
using namespace std;
bool checkArraySorted(vector<int> arr, int n){
  for(int i=1;i<n;i++){
    if(arr[i-1]<=arr[i]){
      return true;
    }
    else{
      return false;
    }
  }
}
int main(){
  int n;
  cout<<"Enter the number of elements in the array";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cout<<"Enter the elemnts of the array";
    cin>>arr[i];
  }
  bool ans=checkArraySorted(arr,n);
  if(ans){
    cout<<"The array is sorted";
  }
  else{
    cout<<"The array is not sorted";
  }
}
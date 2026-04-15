#include<iostream>
using namespace std;
#include<vector>
int largestelement(vector<int> arr,int n){
  int maxval=arr[0];
  for(int i=0;i<=n-1;i++){
    if(arr[i]>maxval){
      maxval=arr[i];
    }
  }
  return maxval;
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
  int maxval=largestelement(arr,n);
  cout<<"The largest element in the array is "<<maxval;
}
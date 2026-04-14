#include<iostream>
using namespace std;
#include<vector>
vector<int> bubblesort(vector<int> arr, int n){
  for(int i=n-1;i>=1;i--){
    int didswap=0;
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        didswap=1;
      }
    }
    if(didswap==0){
      break;
    }
  }
  return arr;
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
  arr=bubblesort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
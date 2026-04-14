#include<iostream>
#include<vector>
using namespace std;
vector<int> insertionsort(vector<int> arr,int n){
  for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j-1],arr[j]);
      j--;
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
  arr=insertionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

#include<iostream>
using namespace std;
#include<vector>
vector<int> selectionsort(vector<int> arr,int n){
  for(int i=0;i<=n-2;i++){
    int min=i;
    for(int j=i;j<=n-1;j++){
    if(arr[j]<arr[min]){
      min=j;
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
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
  arr=selectionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
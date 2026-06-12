#include<bits/stdc++.h>
using namespace std;
int BS(vector<int> arr,int key){
  int low=0;
  int high=arr.size()-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(key>arr[mid]){
      low=mid+1;
    }
    else if(key<arr[mid]){
      high=mid-1;
    }
  }
  return -1;
}

int main(){
  int num;
  vector<int> vec={33,45,100,102,200,300,309};
  num=BS(vec,309);
  cout<<"The index on which target key is: "<< num <<endl;
  return 0;
}
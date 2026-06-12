#include<bits/stdc++.h>
using namespace std;
int BS(vector<int> arr,int n,int key){
  int low=0;
  int high=n-1;
  while(low<=hig){
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
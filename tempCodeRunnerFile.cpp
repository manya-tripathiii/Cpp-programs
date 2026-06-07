#include<iostream>
#include<vector>
using namespace std;
int consecutiveOnes(vector<int> arr,int n){
  int count=0;
  int j=1;
  for(int i=0;i<n;i++){
    if(arr[i]==1&&arr[j]==1
#include<bits/stdc++.h>
using namespace std;
int maxSumSubArray(vector<int> arr){
  int n=arr.size();
  int max_sum=INT_MIN;
  for(int i=0;i<n;i++){
    int current_sum=0;
    for(int j=i;j<n;j++){
      current_sum+=arr[j];
      max_sum=max(max_sum,current_sum);
    }
  }
  return max_sum;
}
int main(){
  vector<int> arr={1,-2,2,4};
  int max_sum=maxSumSubArray(arr);
  cout<<"Maximum sum of subarray is: "<<max_sum;
}
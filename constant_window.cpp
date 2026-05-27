#include<iostream>
#include<vector>
using namespace std;
int constant(vector<int> arr,int n,int k){
  int st=0;
  int end=k-1;
  int sum=0;
  for(int i=st;i<=end;i++){
      sum+=arr[i];
    }
  int maxSum=sum;
  for(int i=k;i<n;i++){
    sum=sum-arr[i-k]+arr[i];
    maxSum=max(maxSum,sum);
  }
 return maxSum;
}
int main(){
  vector<int> vec={-1,1,4,0,1,2,0,7,8,10};
  cout<<constant(vec,10,4)<<endl;
}
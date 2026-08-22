#include<bits/stdc++.h>
using namespace std;
int func(vector<int> vec){
  int n=vec.size();
  int max_sum=INT_MIN;
  int max_len=0;
  for(int i=0;i<n;i++){
    int prefix=0;
    for(int j=i;j<n;j++){
      prefix+=vec[j];
      if(max_sum<prefix){
        max_sum=prefix;
        max_len=j-i+1;
        cout<<"Maximum sum of subarray is: "<<max_sum<<endl;
      }
    }
  }
  return max_len;
}
int main(){
  vector<int> arr={1,-2,2,4};
  int max_len=func(arr);
  cout<<"Length of subarray with largest sum is: "<<max_len;
}
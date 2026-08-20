#include<bits/stdc++.h>
using namespace std;
prefxSum(vector<int> vec){
  vector<int> arr;
  int prefix_sum[0]=0;
  for(int i=1;i<vec.size();i++){
    prefix_sum[i]=prefix[i-1]+vec[i];
  }
  return prefix_sum;
}
int main(){
  vector<int> ve={1,1,2,3,5};
  vector<int> num=prefxSum(ve);
  for(int i=0;i<num.size();i++){
    cout<<num[i]<<" ";
  }
}
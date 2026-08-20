#include<bits/stdc++.h>
using namespace std;
int numSumK(vector<int> vec,int k){
  int n=vec.size();
  int i=0;
  int sum=0;
  int count=0;
  vector<int> li;
  while(i<n){
    for(int j=0;j<n;j++){
      count+=1;
      sum+=vec[j];
      if(sum==k){
        li.push_back(count);
      }
    }
    count=0;
    i++;
  }
  int maxVal = *max_element(li.begin(), li.end());
  return maxVal;
}
int main(){
  vector<int> ve={1,1,2,3,5};
  int num=numSumK(ve,5);
  cout<<num;
}
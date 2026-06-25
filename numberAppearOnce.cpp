#include<bits/stdc++.h>
using namespace std;
int numAppearsOnce(vector<int> vec){
  int n=vec.size();
  int count=0;
  unordered_map<int,int> mpp;
  for(int i=0;i<n;i++){
    mpp[vec[i]]++;
  }
  for(auto &it:mpp){
    if(it.second==1){
      return it.first;
    }
  }
}
int main(){
  vector<int> ve={1,1,-1,4,4,5,5};
  int num=numAppearsOnce(ve);
  cout<<num;
}
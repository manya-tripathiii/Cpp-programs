#include <bits/stdc++.h>
using namespace std;

bool isDivisible(vector<int> arr) {
  int n=arr.size();
  vector<int> prefix(n);
  prefix[0]=arr[0];
  for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+arr[i];
  }
  int total=prefix[n-1];
  if(total%2!=0){
    return false;
  }
  return true;
}

int main() {
    vector<int> arr = {6,4,-1,1,8};
    if (isDivisible(arr)) {
        cout << "Yes, divisible into equal sum parts\n";
    } else {
        cout << "No, not divisible\n";
    }
}

// C++ program to remove duplicates from a sorted array
// But this method is by creating new array so space complexity gets increased to O(n) and time complexity is O(n)

/*#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> removeDuplicates(vector<int> arr, int n){
  map<int,int> freq;
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }
  vector<int> arr1;
  for(auto& it:freq){
    if(it.second){
      arr1.push_back(it.first);
    }
  }
  return arr1;
}
int main(){
  int n;
  cout<<"Enter the number of elements in the array";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cout<<"Enter the elemnts of the array";
    cin>>arr[i];
  }
  vector<int> ans=removeDuplicates(arr,n);
  cout<<"The array after removing duplicates is ";
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}*/

// By modifying the give array itself so space complexity is O(1) and time complexity is O(n)

#include<iostream>
#include<vector>
using namespace std;
vector<int> removeDuplicates(vector<int> arr,int n){
  int j=0;
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[j]){
      j++;
      arr[j]=arr[i];
    }
  }
  // Resize the array to remove the extra elements
  arr.resize(j + 1);
  return arr;
}
int main(){
  int n;
  cout<<"Enter the number of elements in the array";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cout<<"Enter the elemnts of the array";
    cin>>arr[i];
  }
  vector<int> ans=removeDuplicates(arr,n);
  cout<<"The array after removing duplicates is ";
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}
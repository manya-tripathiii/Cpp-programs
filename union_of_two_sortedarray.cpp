#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> unionSort(vector<int> arr1,int n , vector<int> arr2,int m){
  set<int> s;
  for(int i=0;i<n;i++){
    s.insert(arr1[i]);
  }
  for(int i=0;i<m;i++){
    s.insert(arr2[i]);
  }
  vector<int> result(s.begin(), s.end());
  return result;
}
int main(){
  int n,m;
  cout<<"Enter the number of elements in the first array: ";
  cin>>n;
  vector<int> arr1(n);
  for(int i=0;i<n;i++){
    cout<<"Enter the elements of the first array: ";
    cin>>arr1[i];
  }
  cout<<"Enter the number of elements in the second array: ";
  cin>>m;
  vector<int> arr2(m);
  for(int i=0;i<m;i++){
    cout<<"Enter the elements of the second array: ";
    cin>>arr2[i];
  }
  vector<int> ans=unionSort(arr1,n,arr2,m);
  cout<<"The union of the two sorted arrays is: ";
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}
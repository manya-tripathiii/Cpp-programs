#include<iostream>
using namespace std;
#include<vector>
int secondlargest(vector<int> arr,int n){
  int largest=INT8_MIN;
  int slargest=INT8_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      slargest=largest;
      largest=arr[i];
    }
    else if(arr[i]<largest && arr[i]>slargest){
      slargest=arr[i];
    }
  }
  return slargest;
}
int secondsmallest(vector<int> arr,int n){
  int smallest=INT8_MAX;
  int ssmallest=INT8_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<smallest){
      ssmallest=smallest;
      smallest=arr[i];
    }
    else if(arr[i]!=smallest && arr[i]<ssmallest){
      ssmallest=arr[i];
    }
  }
  return ssmallest;
}

vector<int> secondorderelement(vector<int> arr, int n){
  int slargest=secondlargest(arr,n);
  int ssmallest=secondsmallest(arr,n);
  return{slargest,ssmallest};
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
  vector<int> ans=secondorderelement(arr,n);
  cout<<"The second largest element in the array is "<<ans[0]<<endl;
  cout<<"The second smallest element in the array is "<<ans[1];
}
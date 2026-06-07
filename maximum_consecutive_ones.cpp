/*#include<iostream>
#include<vector>
using namespace std;
int consecutiveOnes(vector<int> arr,int n){
  int count=0;
  int j=1;
  for(int i=0;i<n;i++){
    if(arr[i]==1&&arr[j]==1 && i==j-1){
      count++;
      j++;

    }
    else{
      j++;
    }
  }
  return count;
}
int main(){
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cout<<"Enter the elements of the array: ";
    cin>>arr[i];
  }
  int ans=consecutiveOnes(arr,n);
  cout<<"The maximum number of consecutive ones in the array is: "<<ans;
}
*/
#include<iostream>
#include<vector>
using namespace std;
int FindMaxConsecutiveOnes(vector<int> arr,int n){
  int count=0;
  int maxCount=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      count++;
    }
    else{
      maxCount=max(maxCount,count);
      count=0;
    }
  }
  return max(maxCount,count);
}
int main(){
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cout<<"Enter the elements of the array: ";
    cin>>arr[i];
  }
  int ans=FindMaxConsecutiveOnes(arr,n);
  cout<<"The maximum number of consecutive ones in the array is: "<<ans;
}
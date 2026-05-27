#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRotateArray(vector<int> arr, int n, int d) {
    for (int i = 0; i < d; i++) {
        arr.push_back(arr[i]);
    }
    arr.erase(arr.begin(), arr.begin() + d);
    return arr;
}
int main() {
    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the elements of the array: ";
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    vector<int> ans = leftRotateArray(arr, n, d);
    cout << "The array after left rotation is: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}


// Rotating array by one position to the lest
/*#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRotateArray(vector<int> arr, int n){
  int temp=arr[0];
  for(int i=0;i<n;i++){
    arr[i-1]=arr[i];
  }
  arr[n-1]=temp;
  return arr;
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
  vector<int> ans=leftRotateArray(arr,n);
  cout<<"The array after left rotation is: ";
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> PuttingZerosAtBack(vector<int> arr,int n){
  int k=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      arr[k]=arr[i];
      k++;
    }
  }
  while(k<n){
    arr[k]=0;
    k++;
  }
  return arr;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = PuttingZerosAtBack(arr, n);

    cout << "The array after putting all zeros at last is: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
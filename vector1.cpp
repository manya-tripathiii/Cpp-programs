#include <iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  cout<<vec.size()<<endl;
  cout<<vec.capacity()<<endl;
  vec.pop_back();
  cout<<vec.at(0)<<endl;
  cout<<vec[0];
  vector <int> vec1={1,2,3};
  for (int val:vec1){
    cout<<val<<endl;
  }
  cout<<endl;
  vector <int> vec2(10,2);
  for(int val1:vec2){
    cout<<val1<<"";
  }
  return 0;
}
// If we want front or last element we use front or back
//No. of elements in vector is size and 
// No. of elemnts that a container can hold it can upgrade from 2^n

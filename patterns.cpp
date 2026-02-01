// Pattern 1
/*#include<iostream>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
  int l;
  int t; 
  cout<<"Enter the numebr";
  cin >>t;
  for(int i=0;i<t;i++){
    cout<<"Enter the number of times you want the star";
    cin>>l;
    print(l);
  }
}*/

//Patter 2

/*#include<iostream>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
  int l;
  int t; 
  cout<<"Enter the numebr";
  cin >>t;
  for(int i=0;i<t;i++){
    cout<<"Enter the number of times you want the star";
    cin>>l;
    print(l);
  }
}*/

//Pattern3

/*#include<iostream>
using namespace std;
void print(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<j+1;
    }
    cout<<endl;
  }
}
int main(){
  int l;
  int t; 
  cout<<"Enter the numebr";
  cin >>t;
  for(int i=0;i<t;i++){
    cout<<"Enter the number of times you want the star";
    cin>>l;
    print(l);
  }
}*/

//Pattern 4
/*#include<iostream>
using namespace std;
void print(int n){
  for(int i=n;i>0;i--){
    for(int j=i;j>0;j--){
      cout<<j;
    }
    cout<<endl;
  }
}
int main(){
  print(5);
}*/

// Patter 5

/*#include<iostream>
using namespace std;
void print(int n){
  for(int i=n;i>0;i--){
    for(int j=i;j>0;j--){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
  print(5);
}*/

//Pattern 5
#include<iostream>
using namespace std;
void print(int n){
  for(int i=n;i>0;i--){
    for(int j=(2*n+1);j>i;j--){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
  print(5);
}

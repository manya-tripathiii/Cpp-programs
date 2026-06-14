/*Tortoise and hair method in which slow pointer moves one step and fast pointer moves two steps*/ 
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  public:
  Node(int data1,Node* next1){
    data=data1;
    next=next1;
  }
  public:
  Node(int data1){
    data=data1;
    next=nullptr;
  }
};
Node* ConvertArrtoLL(vector<int> arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}
int middleValue(Node* head){
  Node* slow=head;
  Node* fast=head;
  while(fast!=NULL && fast->next!=nullptr){
    slow=slow->next;
    fast=fast->next->next;
  }
  return slow->data;
}
int main(){
  vector<int> vec={33,1,2,7,33,2,1};
  Node* head=ConvertArrtoLL(vec);
  int head1=middleValue(head);
  cout<<head1;
}
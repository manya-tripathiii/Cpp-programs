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
Node* converttoll(vector<int> arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]); 
    mover->next=temp;
    mover=temp;
  }
  return head;
}
int lengthofll(Node* head){
  Node* temp=head;
  int count=0;
  while(temp){
    temp=temp->next;
    count++;
  }
  cout<<"\nThe length of the linked list is: "<<count;
}

bool search(Node* head,int key){
  Node* temp=head;
  while(temp){
    if(temp->data==key){
      return true;
    }
    temp=temp->next;
  }
  return false;
}
int main(){
  vector<int> vec={12,3,4,11,5};
  Node* head=converttoll(vec);
  Node* temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  lengthofll(head);
  cout<<"\nEnter the key to search: ";
  int key;
  cin>>key;
  bool ans=search(head,key);
  if(ans){
    cout<<"Key found in the linked list";
  }
  else{
    cout<<"Key not found in the linked list";
  }
}
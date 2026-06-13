#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  Node* prev;
  int data;
  Node* next;
  public:
  Node(Node* prev1,int data1,Node* next1){
    prev1=prev;
    data1=data;
    next1=next;
  }
  public:
  Node(int data1){
    prev=nullptr;
    data=data1;
    next=nullptr;
  }
};
Node* DllHead(Node* head,int value){
  Node* newNode=new Node(value);
  newNode->next=head;
  head->prev=newNode;
  return newNode;
}

Node* inserionBeforeTail(Node* head,int value){
  Node* newNode=new Node(value);
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  Node* temp1=temp->prev;
  temp1->next=newNode;
  newNode->prev=temp1;
  newNode->next=temp;
  temp->prev=newNode;
  return head;  
}

Node* insertAtKthPosition(Node* head,int value){
  
}
Node* convertArrToDLL(vector<int> arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=0;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    temp->prev=mover;
    mover=temp;
  }
  return head;
}
int main(){
  vector<int> vec={33,1,5,22,1,2,3};
  Node* head=convertArrToDLL(vec);
  Node* head1=inserionBeforeTail(head,20);
  Node* temp=head1;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
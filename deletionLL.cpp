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

Node* deleteNode(Node* head){
  if(head==NULL){
    return head;
  }
  Node* temp=head;
  head=head->next;
  free(temp);
  return head;
}
Node* deletelastelement(Node* head){
  Node*temp=head;
  if(head==NULL||head->next==nullptr){
    return NULL;
  }
  while(temp->next->next!=nullptr){
    temp=temp->next;
  }
  free(temp->next);
  temp->next=nullptr;
  return head;
}
int main(){
  vector<int> vec={12,3,4,11,5};
  Node* head=converttoll(vec);
  Node* temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  Node* newHead=deleteNode(head);
  Node* newHead2=deletelastelement(newHead);
  cout<<"\nAfter deletion: ";
  temp=newHead2;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}
/*By changing the links we made solution optimal time complexity=O(n) and space 
complexity =O(1)*/
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  Node* prev;
  int data;
  Node* next;
  public:
  Node(Node* prev1,int data1,Node* next1){
    prev=prev1;
    data=data1;
    next=next1;
  }
  public:
  Node(int data1){
    prev=nullptr;
    data=data1;
    next=nullptr;
  }
};

Node* convertArrToDLL(vector<int> arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    temp->prev=mover;
    mover=temp;
  }
  return head;
}

Node* reverseDLL(Node* head){
  if(head==NULL || head->next == nullptr){
    return head;
  }
  Node* last=NULL;
  Node* current=head;
  while(current!=NULL){
    last=current->prev;
    current->prev=current->next;
    current->next=last;
    current=current->prev;
  }
  return last->prev;
}
int main(){
  vector<int> vec={33,1,5,22,1,2,3};
  Node* head=convertArrToDLL(vec);
  Node* head1=reverseDLL(head);
  cout<<"\nAfter reversing: ";
  Node* temp=head1;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
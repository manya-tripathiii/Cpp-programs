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
Node* insertathead(Node* head,int el){
  return new Node(el,head);
}
Node* insertAttail(Node*head,int el){
  Node* temp=head;
  Node* newNode=new Node(el);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
  return head;
}
Node* insertAtAnyPosition(Node*head,int k,int el){
  if(k==1){
    return new Node(el,head);
  }
  int count=0;
  Node*temp=head;
  Node* prev=NULL;
  Node* newNode= new Node(el);
  while(temp->next!=NULL){
    count++;
    if(count==k){
      prev->next=newNode;
      newNode->next=temp;
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
}
int main(){
  vector<int> vec={33,1,5,22,1,2,3};
  Node* head=ConvertArrtoLL(vec);
  Node* head1=insertAtAnyPosition(head,3,100);
  Node* temp=head1;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
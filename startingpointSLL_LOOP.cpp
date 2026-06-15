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
Node* insertAttail(Node*head,int el){
  Node* temp=head;
  Node* newNode=new Node(el);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
  newNode->next=head;
  return head;
}

Node* detectLoop(Node* head){
  Node* temp=head;
  map<Node* ,int> mpp;
  while(temp!=NULL){
    if(mpp.find(temp)!=mpp.end()){
      return temp;
    }
    mpp[temp]=1;
    temp=temp->next;
  }
  return NULL;
}
int main(){
  vector<int> vec={33,1,5,22,1,2,3};
  Node* head=ConvertArrtoLL(vec);
  Node* head1=insertAttail(head,3);
  Node* result=detectLoop(head);
  cout<<result->data;
}
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
int middleValue1(Node* head){
  int count=0;
  Node* temp=head;
  while(temp!=NULL){
    count++;
    temp=temp->next;
  }
  temp=head;
  int c=(count/2)+1;
  while(temp!=NULL){
    c--;
    if(c==0){
      break;
    }
    temp=temp->next;
  }
  return temp->data;
}

int middleValue(Node* head){
  int count=0;
  Node* temp=head;
  while(temp!=NULL){
    count++;
    temp=temp->next;
  }
  temp=head;
  int c=(count/2)+1;
  while(c!=1){
    temp=temp->next;
    c--;
  }
  return temp->data;
}
int main(){
  vector<int> vec={33,1,2,7,33,2,1};
  Node* head=ConvertArrtoLL(vec);
  int head1=middleValue1(head);
  cout<<head1;
}
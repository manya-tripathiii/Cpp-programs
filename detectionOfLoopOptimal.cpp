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

int detectLoop(Node* head){
  if(!head) return 0;
  Node* slow=head;
  Node* fast=head;
  while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
      return 1;
    }
  }
  return 0;
}
int main(){
  vector<int> vec={33,1,5,22,1,2,3};
  Node* head=ConvertArrtoLL(vec);
  Node* head1=insertAttail(head,3);
  int result=detectLoop(head);
  if(result==1){
    cout<<"Loop Exist"<<endl;
  }
  else{
    cout<<"Loop does Not exist"<<endl;
  }
}
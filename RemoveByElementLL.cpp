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
Node* removeByElement(Node* head,int el){
  Node* temp=head;
  Node* prev=NULL;
  if(head==NULL){
    return head;
  }
  if(head->data==el){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
  }
  while(temp!=NULL){
    if(temp->data==el){
      prev->next=prev->next->next;
      free(temp);
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
  Node* head1=removeByElement(head,33);
  Node* temp=head1;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
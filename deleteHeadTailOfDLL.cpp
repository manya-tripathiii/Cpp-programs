#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  Node* prev;
  int data;
  Node* next;
  Node(Node* prev1, int data1 ,Node* next1){
    prev=prev1;
    data=data1;
    next=next1;
  }
  Node(int data1){
    prev=nullptr;
    data=data1;
    next=nullptr;
  }
};
Node* convertToVec(vector<int> vec){
  Node* head= new Node(vec[0]);
  Node* mover=head;
  for(int i=1;i<vec.size();i++){
    Node *temp=new Node(vec[i]);
    temp->prev=mover;
    mover->next=temp;
    mover=temp;
  }
  return head;
}
Node* deleteHead(Node* head){
  if(head==NULL || head->next==NULL){
    return NULL;
  }
  Node* temp=head;
  head=head->next;
  temp->next=nullptr;
  head->prev=nullptr;
  free(temp);
  return head;
}
Node* deleteTail(Node* head){
  if(head==NULL){
    return head;
  }
  Node* temp=head;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }
  Node* temp2=temp;
  free(temp->next);
  temp->next=nullptr;
  return head;
}
int main(){
  vector<int> vec={1,2,3,4,5};
  Node* head=convertToVec(vec);
  Node* head1=deleteHead(head);
  Node* head2=deleteTail(head1);
  Node* temp=head2;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  return 0;
}
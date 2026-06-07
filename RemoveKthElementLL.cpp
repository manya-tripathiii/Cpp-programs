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
Node* covertarrtoLL(vector<int> arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp= new Node(arr[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}
Node* deleteKth(Node* head,int k){
  if(head==NULL){
    return head;
  }
  if(k==1){
    Node*temp=head;
    head=head->next;
    free(temp);
    return head;
  }
  int count=1;
  Node* temp=head;
  Node* prev=NULL;
  while(temp!=NULL){
    count++;
    if(count == k){
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
  Node* head=covertarrtoLL(vec);
  Node* temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  Node* head1=deleteKth(head,5);
  Node* head2=deleteKth(head,7);
  cout<<"\nAfter deletion: ";
  temp=head2;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
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
/*Node* deleteKthDL(Node* head,int k){
  Node* temp=head;
  if(k==1){
    head=head->next;
    temp->next=nullptr;
    head->prev=nullptr;
    free(temp);
    return head;
  }
  if(head==NULL){
    return NULL;
  }
  int count=0;
  while(temp!=NULL){
    count++;
    if(count==k){
      if(temp->next==nullptr){
        Node* prev2=temp->prev;
        temp->prev=nullptr;
        prev2->next=nullptr;
        free(temp);
        return head;
      }
      Node* prev1=temp->prev;
      prev1->next=temp->next;
      temp->next=temp->prev;
      free(temp);
    }
    temp=temp->next;
  }
  return head;
}*/
Node* deleteElement(Node* temp){
  Node* prev1=temp->prev;
  Node* next1=temp->next;
  if(next1==NULL){
    prev1->next=nullptr;
    temp->prev=nullptr;
    free(temp);
  }
  prev1->next=next1;
  next1->prev=prev1;
  temp->prev=nullptr;
  temp->next=nullptr;
  free(temp);
}
int main(){
  vector<int> vec={1,33,3,4,55,44};
  Node* head=convertToVec(vec);
  /*Node* head1=deleteKthDL(head,6);*/
  deleteElement(head->next);
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  return 0;
}
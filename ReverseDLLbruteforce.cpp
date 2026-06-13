/*This method uses a stack and is two pass solution time complexity=O(2n) and space
complexity = O(n),This is brute force mthod and solution can be optimized by reversing the links*/
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
  stack<int> st;
  Node* temp=head;
  while(temp!= NULL){
    st.push(temp->data);
    temp=temp->next;
  }
  temp=head;
  while(temp!=NULL){
    temp->data=st.top();
    st.pop();
    temp=temp->next;
  }
  return head;
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
#include<bits/stdc++.h>
using namespace std;
 class Node
  {
 public:
     int val;
     Node* next;
 
     Node(int val){
         this->val=val;
         this->next=NULL;
     }
  };
  void insert_tail(Node*&head,Node*&tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;

    }
    tail->next=newNode;
    tail=newNode;
  }
 

int max_value(Node* head){
    Node* tmp=head;
    int mval=INT_MIN;
    while (tmp != NULL)
    {
         if(tmp->val>mval){
            mval=tmp->val;
         }
         tmp=tmp->next;
    }
    return mval;
    
}
int min_value(Node* head){
    Node* tmp=head;
    int mival=INT_MAX;
    while (tmp != NULL)
    {
         if(tmp->val<mival){
            mival=tmp->val;
         }
         tmp=tmp->next;
    }
    return mival;
    
}


int main(){

    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }

     
     

    int mx_value=max_value(head);
    int mn_value=min_value(head);
    cout<<mx_value<<" "<<mn_value<<endl; 
    return 0;
}
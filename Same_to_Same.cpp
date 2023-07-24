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

 void print_linked_list(Node* head){        //O(N) 
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";

        tmp=tmp->next;   // increaj tmp,   tmp ke samner ghore pathano 

    }
    cout<<endl;
    
}
int  size(Node*head){    // O(N) 
    Node*tmp=head;
    int count=0;
    while (tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return  count;
    
}

int main(){

  Node* head1=NULL;
  Node* tail1=NULL;
  int val;
  while (true)
  {
     cin>>val;
     if(val==-1) break;
     insert_tail(head1,tail1,val);
  }
 
  Node* head2=NULL;
  Node* tail2=NULL;
   
  while (true)
  {
     cin>>val;
     if(val==-1) break;
     insert_tail(head2,tail2,val);
  }
//    print_linked_list(head1);
//   print_linked_list(head2);

  int a=size(head1);
  int b=size(head2);
   bool flag=true;
   while (head1 != NULL && head2 != NULL )
   {
        if(head1->val != head2->val){
            flag=false;
            break;
        }
        head1=head1->next;
        head2=head2->next;
   }
    
    if(a != b) cout<<"NO"<<endl; 
    else if(flag==true) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;

   
      
    
    return 0;
}
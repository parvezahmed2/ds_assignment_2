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
  void insert_head(Node *&head,Node* &tail, int val){   // O(1) 
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
    if(tail==NULL){
        tail=newNode;
    }

}
 
void insert_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head == NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print_linked_list(Node* head,Node* tail){        //O(N) 
    Node* tmp=head;
    Node* tmp2=tail;
    while (tmp!=NULL && tmp2 !=NULL)
    {
        cout<<tmp->val<<" "<<tmp2->val<<endl;

        tmp=tmp->next;  
        tmp2=tmp2->next;   //  increase  tmp and tmp2 ,  tmp ke samner ghore pathano 
         

    }
   
    
}

 int main(){
 
 Node* head=NULL;
 Node* tail=NULL;
int q;
 cin>>q;
 while (q--)
 {
    int x,v;
    cin>>x>>v;
    if(x==0){
         insert_head(head,tail,v);
       
    }
    else if(x == 1){
         insert_tail(head,tail,v);
       
    }
    print_linked_list(head,tail);

 }
 
     
     return 0;
 }
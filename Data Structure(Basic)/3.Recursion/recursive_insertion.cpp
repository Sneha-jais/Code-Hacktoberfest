#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int data){
    this->data=data;
    this->next=NULL;
}
};

Node *take_input(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node *rec_insert(Node *head,int pos,int data){

 if(head==NULL)
    return NULL;
    if(pos==0){
        Node* temp=new Node(data);
        temp->next=head;
        return temp;
    }
    
    if(pos==1){
        Node* temp=new Node(data);
        temp->next=head->next;
        head->next=temp;
        return head;
    }
    Node* curr=rec_insert(head->next,pos-1,data);
    
    return head;
}


int main(){
Node *head=take_input();

// print(head);
int i,data;
cin>>i>>data;

head=rec_insert(head,i,data);
print(head);


    return 0;
}
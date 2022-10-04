
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
Node *next;
int data;
    Node(int data){
   
    this-> data =data;
    this-> next=NULL;
    }
};


Node *takeInput()
{

    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {

        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

int len_linklist(Node *head){
 if(head==NULL)
 return 0;
 else 
 return 1+len_linklist(head->next);


}

int main()
{
Node *head = takeInput();
int temp=len_linklist(head);
cout<<temp<<endl;

         return 0;
}

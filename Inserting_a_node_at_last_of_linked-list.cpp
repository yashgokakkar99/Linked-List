#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void printLL(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void insertAtEnd(Node **(head_ref),int new_data)
{
    Node *new_node  = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    Node *last = *(head_ref);

    if(*(head_ref) == NULL){
        *(head_ref) = new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    third->next = NULL;

    printLL(head);

    cout<<endl;

    insertAtEnd(&head,69);

    printLL(head);



}

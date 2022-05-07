#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void printList(Node *n){
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void insertAfterANode(Node *prev_node,int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
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
    fourth->next = NULL;

    printList(head);

    insertAfterANode(head->next,100);
    cout<<endl;
    printList(head);

    return 0;
}

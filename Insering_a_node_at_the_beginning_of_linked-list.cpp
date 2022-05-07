#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void push(Node **(head_ref),int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *(head_ref);
    *(head_ref) = new_node;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printList(head);

    push(&head,6);

    cout<<endl;
    printList(head);
    return 0;
}

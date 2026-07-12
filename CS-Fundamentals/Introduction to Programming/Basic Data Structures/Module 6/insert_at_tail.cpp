#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// void insert_at_head(Node *&head, int val)
// {
//     Node *newnode = new Node(100);
//     newnode->next = head;
//     head = newnode;
// }

void insert_at_tail(Node *&head, int val)
{
    Node* newnode = new Node(val);
    //node triversing 
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //right now is at last node
    tmp->next = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    // Node Create
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // Node Connection
    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);
    print_linked_list(head);
    return 0;
}
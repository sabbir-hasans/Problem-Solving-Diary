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
    Node *newnode = new Node(val);
// if head is faka mean head = tail
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    

    // node triversing
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // right now is at last node
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
    Node *head = NULL;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    print_linked_list(head);
    return 0;
}
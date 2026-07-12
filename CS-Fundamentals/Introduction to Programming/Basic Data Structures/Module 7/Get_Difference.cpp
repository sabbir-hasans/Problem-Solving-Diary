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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    // if head is faka mean head = tail
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;

    int maximum = head->val;
    int minimum = head->val;

    while (tmp != NULL)
    {
        if (tmp->val > maximum)
        {
            maximum = tmp->val;
        }

        if (tmp->val < minimum)
        {
            minimum = tmp->val;
        }

        tmp = tmp->next;
    }

    cout << maximum - minimum << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
    return 0;
}
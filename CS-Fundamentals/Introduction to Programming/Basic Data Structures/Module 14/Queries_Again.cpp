#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_index(Node *&head, Node *&tail, int idx, int val)
{
    int sz = size(head);
    if (idx < 0 || idx > sz)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
    }
    else if (idx == 0)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i < idx; i++)
        {
            tmp = tmp->next;
        }
        if (idx == sz)
        {
            tmp = tail;
        }
        newnode->next = tmp->next;
        newnode->prev = tmp;
        if (tmp->next != NULL)
            tmp->next->prev = newnode;
        else
            tail = newnode;

        tmp->next = newnode;
    }
    print_forward(head);
    print_backward(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        insert_at_index(head, tail, X, V);
    }
    return 0;
}
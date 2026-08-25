#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node k niya kaj korbo
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        // connection
        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void left_tree(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }
    if (root->left != NULL)
    {
        left_tree(root->left);
    }
    else
    {
        left_tree(root->right);
    }
    cout << root->val << " ";
}

void right_tree(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }
    cout << root->val << " ";
    if (root->right != NULL)
    {
        right_tree(root->right);
    }
    else
    {
        right_tree(root->left);
    }
}

int main()
{
    Node *root = input_tree();
    if (root == NULL)
        return 0;
    if (root->left != NULL)
    {
        left_tree(root->left);
    }
    cout << root->val << " ";
    if (root->right != NULL)
    {
        right_tree(root->right);
    }
    return 0;
}
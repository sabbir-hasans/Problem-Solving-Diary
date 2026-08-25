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

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int max_depth(Node *root)
{
    if (root == NULL)
        return -1;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();

    int total_nodes = count_nodes(root);
    int d = max_depth(root);

    if (total_nodes == pow(2, d + 1) - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
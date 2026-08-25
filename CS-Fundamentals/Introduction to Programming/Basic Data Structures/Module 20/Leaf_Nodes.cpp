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

void get_leaf_nodes(Node *root)
{
    if (root == NULL)
        return;

    vector<int> leaf;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            leaf.push_back(f->val);
        }

        if (f->left != NULL)
            q.push(f->left);

        if (f->right != NULL)
            q.push(f->right);
    }

    sort(leaf.begin(), leaf.end(), greater<int>());

    for (int i = 0; i < leaf.size(); i++)
    {
        cout << leaf[i] << " ";
    }
}

int main()
{
    Node *root = input_tree();
    get_leaf_nodes(root);
    return 0;
}
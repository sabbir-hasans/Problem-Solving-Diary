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

void print_level_nodes(Node *root, int target_level)
{
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    bool found = false;

    while (!q.empty())
    {
        Node *node = q.front().first;
        int level = q.front().second;

        q.pop();

        if (level == target_level)
        {
            cout << node->val << " ";
            found = true;
            continue;
        }

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }

    if (!found)
        cout << "Invalid";
}

int main()
{
    Node *root = input_tree();

    int x;
    cin >> x;
    print_level_nodes(root, x);
    
    return 0;
}
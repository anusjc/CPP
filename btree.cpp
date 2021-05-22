#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void Inorder_without_Recursion(struct Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL or s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}
void Preorder_without_Recursion(struct Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    s.push(root);
    while (s.empty() == false)
    {
        struct Node *node = s.top();
        cout << node->data << " ";
        s.pop();
        if (node->right)
        {
            s.push(node->right);
        }
        if (node->left)
        {
            s.push(node->left);
        }
    }
}
void Inorder(struct Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void PreOrder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void Postorder_without_Recursion(struct Node *root)
{
    stack<Node *> s1, s2;
    s1.push(root);
    while (s1.empty() == false)
    {
        struct Node *node = s1.top();
        s2.push(node);
        s1.pop();
        if (node->left)
        {
            s1.push(node->left);
        }
        if (node->right)
        {
            s1.push(node->right);
        }
    }
    while (s2.empty() == false)
    {
        struct Node *nde = s2.top();
        cout << nde->data << " ";
        s2.pop();
    }
}

void PostOrder(struct Node *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
unordered_map<Node *, int> cnt;
void traverse(Node *root)
{
    stack<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *cur = s.top();
        if (cur == NULL)
        {
            s.pop();
            continue;
        }
        if (cnt[cur] == 0)
            s.push(cur->left);
        else if (cnt[cur] == 2)
            s.push(cur->right);
        else if (cnt[cur] == 1)
            cout << cur->data << " ";
        else
            s.pop();
        cnt[cur]++;
    }
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // cout << "Inorder";
    Inorder(root);
    // cout << "Inorder Without Recursion";
    // Inorder_without_Recursion(root);
    // cout << "Pre";
    // PreOrder(root);
    // cout << "PreOrder without Recursion";
    // Preorder_without_Recursion(root);
    // cout << "Post";
    // PostOrder(root);
    // cout << "PostOrder without Recursion";
    // Postorder_without_Recursion(root);
    traverse(root);
}
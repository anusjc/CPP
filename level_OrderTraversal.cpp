#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};
vector<vector<int>> printLevelOrder(Node *root)
{
    vector<vector<int>> result;
    vector<int> res;
    if (root == NULL)
        return result;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int siz = q.size();
        for (auto i = 0; i < siz; i++)
        {

            Node *node = q.front();
            res.push_back(node->data);
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        result.push_back(res);
    }
    return result;
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    // printLevelOrder(root);
    vector<vector<int>> ans = printLevelOrder(root);
    for (auto i = 0; i < 6; i++)
    {
        for (auto j = 0; j < 6; j++)
        {
            cout << ans[i][j];
        }
        cout << "\n";
    }
    return 0;
}

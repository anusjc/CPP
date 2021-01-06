#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
void preorder(struct Node *tree){
    if(tree==NULL)
        return;
    cout<<tree->data<<" ";
    preorder(tree->left);
    preorder(tree->right);   
}
void iterative_preorder(struct Node *tree)
{
    stack<struct Node*> s;
    struct Node *curr=tree;
    while(curr!=NULL or s.empty()==false)
    {
        while(curr!=NULL){
            cout<<curr->data<<" ";
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }

}
void iterative_inorder(struct Node *tree)
{
    stack<Node*> s;
    Node *curr=tree;
    while(curr!=NULL or s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}
void iterative_posteorder(struct Node *tree)
{
    
}
void inorder(struct Node *tree){
    if(tree==NULL)
        return;
    inorder(tree->left);
    cout<<tree->data<<" ";
    inorder(tree->right);   
}
void postorder(struct Node *tree){
    if(tree==NULL)
        return;
    postorder(tree->left);
    postorder(tree->right);   
    cout<<tree->data<<" ";
}
int max_depth(struct Node *tree){
    if(tree==NULL){
        return 0;
    }
    else{
        int ldepth=max_depth(tree->left);
        int rdepth=max_depth(tree->right);

        if(ldepth>rdepth){
            return (ldepth+1);
        }
        else{ return (rdepth+1);}
    }
}
int main()
{
    struct Node *root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    cout<<"Inorder Traversal:";
    inorder(root);
    cout<<"iterative_inorder";
    iterative_inorder(root);
    cout<<"Iterative preorder Traversal:";
    iterative_preorder(root);
    cout<<"preorder Traversal:";
    preorder(root);
    cout<<"postorder Traversal:";
    postorder(root);
    cout<<"Depth of Tree is:"<<max_depth(root);
}
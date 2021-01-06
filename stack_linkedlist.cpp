#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
class Stack{
    private:
        Node *top;
    public:
        Stack(){top=nullptr;}
        void push(int x);
        int pop();
        void display();    
};
void Stack::push(int x)
{
    Node *t=new Node;
    if( t == nullptr)
        cout<<"Stack is Empty";
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    } 
}
int Stack :: pop()
{
    int x=-1;
    if(top == nullptr)
        cout<<"Stack is Empty\n";
    else
    {
        x=top->data;
        Node *t=top;
        top=top->next;
        delete t;
    }
    return x;
        

}
void Stack :: display()
{
    Node *p=top;
    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.pop();
    stk.display();
     return 0;
    
}
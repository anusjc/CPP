#include<bits/stdc++.h>
using namespace std;
class circularqueue
{
private:
    int front;
    int rear;
    int size;
    int *Q;
public:
    circularqueue(int size);
    ~circularqueue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};

circularqueue::circularqueue(int size)
{
    this->size=size;
    front=rear=0;
    Q=new int[size];
}

circularqueue::~circularqueue()
{
    delete []Q;
}
bool circularqueue::isEmpty(){
    if(front==rear){return true;}
    return false;
}
bool circularqueue::isFull(){
    if((rear+1)%size==front){return true;}
    return false;
}
void circularqueue::enqueue(int x){
    if(isFull()){
        cout<<"Queue is full";
    }
    else
    {
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}
int circularqueue::dequeue(){
    int x=-1;
    if(isEmpty()){
        cout<<"Queue is Empty";
    }
    else
    {
        front=(front+1)%size;
        x=Q[front];
    }
    return x;
}
void circularqueue::display(){
    int i=front+1;
    do{
        cout<<Q[i]<<" ";
        if(i<rear){
            cout<<"<-"<<" ";
        }
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
}

int main(){
    int n;
    cout<<"Enter the Size of Queue:";
    cin>>n;
    circularqueue q(n);
    for(auto  i=0;i<n;i++)
    {
        int m;
        cin>>m;
        q.enqueue(m);
    }
    q.display();
    q.dequeue();
    q.dequeue();
    cout<<"\n";
    q.display();
    
}
#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int s;
    int *Q;

public:
    // Queue(){front=rear=-1;s=10;Q=new int[s];}
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};

Queue::Queue(int size)
{
    this->s = size;
    front = rear = -1;
    Q = new int[this->s];
}
Queue::~Queue()
{
    delete []Q;
}
bool Queue::isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}
bool Queue::isFull(){
    if(rear==s-1){
        return true;
    }
    return false;
}
void Queue::enqueue(int x){
    if(isFull()){
        cout<<"Queue is Full\n";
    }
    rear++;
    Q[rear]=x;
}
int Queue::dequeue(){
    int x=-1;
    if(isEmpty()){
        cout<<"Queue is Empty\n";
    }
    front++;
    x=Q[front];
    return x;
}
void Queue::display(){
    for(auto i=front+1;i<=rear;i++)
    {
        cout<<Q[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the Size of Queue:";
    cin>>n;
    Queue q(n);
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
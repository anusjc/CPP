#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *start{nullptr};
void create()
{
    struct node *temp,*ptr;
    temp=new node;
    if(temp == nullptr)
    {
        cout<<"Out of menory\n";
        exit(0);
    }
    cout<<"Enter the Date value for node\n";
    cin>>temp->data;
    temp->next=nullptr;
    if(start == nullptr)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=nullptr)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    
}
void display()
{
    struct node *ptr;
    if(start==nullptr)
    {
        cout<<"List is Empty\n";
        return;
    }
    else
    {
        ptr=start;
        cout<<"The List Elements are:\n";
        while(ptr!=nullptr)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
    }
    
}
void insert_at_begin()
{
    struct node *temp;
    temp= new node;
    if(temp == nullptr)
    {
        cout<<"Out of memory\n";
        exit(0);    
    }
    else
    {
        cout<<"Enter the Data for node:\n";
        cin>>temp->data;
        temp->next=nullptr;
        if(start == nullptr)
        {
            cout<<"List is Empty\n";
            return;
        }
        temp->next=start;
        start=temp;
    }
    
}
void insert_at_end()
{
    struct node *ptr,*temp;
    temp=new node;
    if(temp==nullptr)
    {
        cout<<"Out of Memory\n";
        exit(0);
    }
    cout<<"Enter Data value for node:\n";
    cin>>temp->data;
    temp->next=nullptr;
    if(start==nullptr)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=nullptr)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    
}
void counting_nodes()
{
    struct node *ptr;
    int c=1;
    ptr=start;
    while(ptr->next!=nullptr)
    {
        ptr=ptr->next;
        c++;
    }
    cout<<"There are"<<" "<<c<<"nodes"<<endl;
}
void sum_of_nodes()
{
    struct node *ptr;
    int sum=0;
    ptr=start;
    while(ptr)
    {
        sum=10*sum+(ptr->data);
        ptr=ptr->next;
        
    }
    cout<<"The Sum of All Nodes is"<<sum<<"\n";
}
void maximun_node()
{
    struct node *ptr;
    int max=-32768;
    ptr=start;
    while(ptr)
    {
        if(ptr->data>max)
            max=ptr->data;
            ptr=ptr->next;
    }
    cout<<"Maximum Node is"<<max<<"\n";
}
void search_node()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = start;   
    if(ptr == NULL)  
    {  
        cout<<"\nEmpty List\n";  
    }  
    else  
    {   
        cout<<"\nEnter item which you want to search?\n";   
        cin>>item;  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                cout<<"Item Found at location:"<<i+1;
                flag=0;  
                break;
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            cout<<"Item Not Found";
        }  
    }     
          
}  
          

    

int main()
{
    int options;
	while(1)
	{
		cout<<"\nThis is the program for Linked List:\n";
		cout<<"\n1 : Create\n";
		cout<<"\n2 : Display\n";
        cout<<"\n3 : Insert_at_begin\n";
        cout<<"\n4 : Insert_at_end\n";
        cout<<"\n5 : Insert_at_position\n";
        cout<<"\n6 : Delete_at_begin\n";
        cout<<"\n7 : Delete_at_end\n";
        cout<<"\n8 : Delete_at_position\n";
        cout<<"\n9 : To count the number of nodes\n";
        cout<<"\n10 : To Calculate the sum of all nodes\n";
        cout<<"\n11: To Find Maximum Node\n";
        cout<<"\n12: For Searching any element:\n";
        cout<<"\nEnter any other number to exit:\n";
		
		cout<<"\nEnter Your Choice:\n";
		cin>>options;
	switch(options)
	{
	case 1: create();
		     break;
	case 2:	display();
	         break;   
    case 3:  insert_at_begin();
                break;         
    case 4: insert_at_end();
            break;          
    // case 5: insert_at_position();
            break;  
    // case 6: delete_at_begin();
            break;    
    // case 7: delete_at_end();
            break;
    // case 8: delete_at_position();
            break; 
    case 9: counting_nodes();
            break;     
    case 10: sum_of_nodes();
            break;          
    case 11: maximun_node();
            break;                
    case 12: search_node();
            break;
    default: exit(0);
             break;             
	}
}

    return 0;
}

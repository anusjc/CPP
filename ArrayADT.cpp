#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
}arr;
void Display(struct Array arr)
{
    cout<<"Elements are:"<<"\n";
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<"\n";
    }
    cout<<"\n";
   
}
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
}
void Insert(struct Array *arr,int index,int x)
{
  if(index>=0 && index<=arr->length)   
  {
      for(int i=arr->length;i>index;i--)
      {
          arr->A[i]=arr->A[i-1];
      }
      arr->A[index]=x;
      arr->length++;
  }
}
void Delete(struct Array *arr,int index)
{
   if(index>=0 && index<=arr->length)
   {
       int x=arr->A[index];
       for(int i=index;i<arr->length-1;i++)
       {
           arr->A[i]=arr->A[i+1];
       }
       arr->length--;
   }
}
int LinearSearch(struct Array arr,int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(key == arr.A[i])
            return i;
    }
    return -1;
}
int BinarySearch(struct Array *arr,int key)
{
  int f,l,m;
    f=0;
    l=arr->length-1;
    while(f<=l)
    {
      m=(f+l)/2;
      if(key==arr->A[m])
      {
        return m;
      }
      else if(key<arr->A[m])
        {l=m-1;}
      else 
        {f=m+1;}    
    }
    return -1;
}
int main()
{
    cout<<"Enter the size of Array:";
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;
    int n;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;
    while(1)
    {
    int ch;
    cout<<"This is a Menu Driven Program:"<<"\n";
    cout<<"1: For Display:"<<endl;
    cout<<"2: For Append:\n";
    cout<<"3: For Insert:\n";
    cout<<"4: For Delete:\n";
    cout<<"5: Linear Search\n";
    cout<<"6: Binary Search\n";
    cout<<"7: Mininum element in Array\n";
    cout<<"8: Maximum element in Array\n";
    cout<<"Enter Your Choice:\n";
    cin>>ch;
    switch(ch)
    {
        case 1: Display(arr);
                break;
        case 2: cout<<"Enter the Value to Append:\n";
                int a1;
                cin>>a1;
                Append(&arr,a1);
                break;
        case 3: cout<<"Enter the position & Value to Insert :\n";
                int a4,b;
                cin>>a4>>b;
                Insert(&arr,a4,b);
                break;
        case 4: cout<<"Enter the element to be deleted:\n";
                int a2;
                cin>>a2;
                Delete(&arr,a2);
                break;
        case 5: cout<<"Enter the number to be searched:\n";
                int a3;
                cin>>a3;
                cout<<LinearSearch(arr,a3);
                break;
        case 6: cout<<"Enter the number to be searched:\n";
                int a;
                cin>>a;
                cout<<BinarySearch(&arr,a);
                break;               
    }
    }
}

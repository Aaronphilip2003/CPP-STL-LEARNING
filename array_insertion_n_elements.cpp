#include<iostream>
using namespace std;
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
}

int indexInsertion(int a[],int size,int capacity,int element,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
        for(int i=size-1;i>=index;i--)
        {
            a[i+1]=a[i];
        }
        a[index]=element;
        return 1;
}

int main()
{
    int buffer;
    int size,capacity,element,index,n;
    cout<<"Enter the total capacity of the dataset(NOT SIZE):";
    cin>>capacity;
    cout<<endl;
    cout<<"Enter the Size of the dataset:";
    cin>>size;
    int a[size];
    cout<<endl;
    cout<<"Enter the elements of the dataset:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<">";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Current Dataset:"<<endl;
    display(a,size);
    cout<<"Enter the number of new elements to be inserted:";
    cin>>n;
    while(n!=0)
    {
        cout<<endl;
        cout<<"Enter the element to be inserted into the dataset:";
        cin>>element;
        cout<<endl;
        cout<<"Enter the index to be inserted on:";
        cin>>index;
        indexInsertion(a,size,capacity,element,index);
        size++;
        n--;
    }
    cout<<"New Dataset:"<<endl;
    display(a,size);
    cout<<"New Size of the dataset:"<<size<<endl;
    cin>>buffer;
    return 0;

}
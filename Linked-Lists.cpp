#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};


void linkedListTraversal(struct Node * ptr)
{
    while(ptr!=0)
    {
        cout<<"ELEMENT:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    int buffer;
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //Allocation of memory from the heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=100;
    head->next=second;

    second->data=200;
    second->next=third;

    third->data=200;
    third->next=NULL;

    linkedListTraversal(head);


    cin>>buffer;
    return 0;
}
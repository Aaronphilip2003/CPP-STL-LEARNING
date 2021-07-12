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

struct Node * insertAtFirst(int data,struct Node *head)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node*));
    ptr->next=head;
    ptr->data=data;
}

int main()
{
    int buffer;
    struct Node* head;
    struct Node* second;
    struct Node* third;

    int element=0;


    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=100;
    head->next=second;

    second->data=200;
    second->next=third;

    third->data=300;
    third->next=NULL;

    linkedListTraversal(head);

    cout<<"Enter element to be inserted at the first index:";
    cin>>element;

    head=insertAtFirst(element,head);

    linkedListTraversal(head);

    cin>>buffer;
    return 0;
}
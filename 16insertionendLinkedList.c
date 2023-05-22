#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data;
     struct Node *Next;

};

void LinkedListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->Next);
        ptr=ptr->Next;
    }
}

struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while(p->Next!=NULL)
    {
        p=p->Next;
    }
    p->Next=ptr;
    ptr->Next=NULL;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;


    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct  Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node)) ;
    fourth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=9;
    head->Next=second;

    second->data=7;
    second->Next=third;

    third->data=5;
    third->Next=fourth;

    fourth->data=2;
    fourth->Next=NULL;

    printf("Linked list before insertion") ;
    LinkedListTraversal(head);
    head=insertAtEnd(head,78);
    printf("\nLinkedlist after insertion");
    LinkedListTraversal(head);
    return 0;
}   
    





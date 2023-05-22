#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node  *next;

};

void LinkedListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    

}

struct Node  *  insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;


    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));


    head->data=6;
    head->next=second;


    second->data=8;
    second->next=third;

    third->data=4;
    third->next=fourth;


    fourth->data=9;
    fourth->next=NULL;

    LinkedListTraversal(head);
    head=insertAtFirst(head,78);
    LinkedListTraversal(head);
    return 0;
};

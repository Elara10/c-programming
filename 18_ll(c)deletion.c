//Delete at last
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;

};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("element:%d\n",ptr->data);
        ptr=ptr->Next;
    }
    
}
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->Next;
    while(q->Next!=NULL)
    {
        p=p->Next;
        q=q->Next;

    }
    p->Next=NULL;
    free(q);
    return head;
} 
int main()
{
    struct  Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=9;
    head->Next=second;

    second->data=6;
    second->Next=third;

    third->data=4;
    third->Next=fourth;

    fourth->data=5;
    fourth->Next=NULL;

    printf("LinkedList before deletion\n");
    LinkedListTraversal(head);
    head=deleteAtLast(head);
    printf("LinkedList after deletion\n");
    LinkedListTraversal(head);
    return 0;
}




    
    

//doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *Next;

};
void  doublyLinkedListTraversal(struct Node *head)
{
    struct Node *ptr=head;
    do
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->Next;

    } 
    while(ptr!=head);

};
struct Node *doublyinsertion(struct Node *head,int data)
{
    struct Node *N1=(struct Node *)malloc(sizeof(struct Node));
    struct Node *N2=(struct Node *)malloc(sizeof(struct Node));
    struct Node *N3=(struct Node *)malloc(sizeof(struct Node));
    struct Node *N4=(struct Node *)malloc(sizeof(struct Node));


    N1->Next=N2;
    N2->Next=NULL;
    return head;
}

int main()
{
    printf("doublylinkedlist before insertion");
    doublyLinkedListTraversal(head);
    head= doublyinsertion(head,5);
    printf("doublylinkedlist after insertion");
    doublyLinkedListTraversal(head);
    return 0;
}
    

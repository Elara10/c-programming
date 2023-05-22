//circular insertion linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
void LinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
      do{
        printf("Element is %d\n",ptr->data);
        ptr=ptr->Next;

      }
      while(ptr!=head);

}
struct Node *insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->Next;
    while(p->Next!=head)
    {
        p=p->Next;
    }
    p->Next=ptr;
    ptr->Next=head;
    head=ptr;
    return head;
}

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

    head->data=8;
    head->Next=second;

    second->data=2;
    second->Next=third;

    third->data=6;
    third->Next=fourth;

    fourth->data=9;
    fourth->Next=head;

    printf("Circular Linked List before insertion\n");
    LinkedListTraversal(head);
    head=insertAtFirst(head,45);
    printf("Circular Linked List after insertion\n");
    LinkedListTraversal(head);
    return 0;

}
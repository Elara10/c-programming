#include<stdio.h>
#include<stdlib.h>
struct Node *f=NULL;
struct Node *r=NULL;
struct Node{
    int data;
    struct Node *Next;
};
void LinkedListTraversal(struct Node *ptr){
    printf("printing the element of this linked list\n");
    while(ptr!=NULL)
    {
    printf("element:%d\n",ptr->data);
            ptr=ptr->Next;
      }
}

void enqueue(int val)
{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data=val;
        n->Next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->Next=n;
            r=n;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct Node *ptr=f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f=f->Next;
        val=ptr->data;
        free(ptr);
        }
        return val;
 }

int main()
{
    LinkedListTraversal(f);
    printf("dequeuing element %d\n",dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    LinkedListTraversal(f);
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *Next;

// };
// void LinkedListTraversal(struct Node*ptr)
// {
//     while(ptr!=NULL)
//     {
//         printf("element:%d\n",ptr->data);
//         ptr=ptr->Next;
//     }
// }

// //deleting the first element from linked list

// struct Node * deletefirst(struct Node *head){
//   struct Node * ptr=head;
//   head=head->Next;
//   free(ptr);
//   return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head=(struct Node *)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node *)malloc(sizeof(struct Node));
//     fourth=(struct Node*)malloc(sizeof(struct Node));



//    head->data=7;
//    head->Next=second;

//    second->data=8;
//    second->Next=third;

//    third->data=9;
//    third->Next=fourth;

//    fourth->data=2;
//    fourth->Next=NULL;

//    printf("LinkedList before deletion\n");
//    LinkedListTraversal(head);
//    head=deletefirst(head);
//    printf("LinkedList after deletion\n");
//    LinkedListTraversal(head);

//    return 0;


// }

//first node(self practice)
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
            printf("Element:%d\n",ptr->data);
            ptr=ptr->Next;
        }
}

struct Node * deletefirst(struct Node *head)

{
    struct Node*ptr=head;
    head=head->Next;
    free(ptr);
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


    head->data=7;
    head->Next=second;

    second->data=8;
    second->Next=third;

    third->data=3;
    third->Next=fourth;

    fourth->data=4;
    fourth->Next=NULL;

    printf("LinkedList before deletion\n");
    LinkedListTraversal(head);
    head=deletefirst(head);
    printf("LinkedList after deletion\n");
    LinkedListTraversal(head);

    return 0;
}








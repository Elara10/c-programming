// //deleting the element at a given index from the linked list
// #include<stdio.h>
// #include<stdlib.h>
// struct Node 
//  {
//     int data;
//     struct Node *Next;
//  };
//  void LinkedListTraversal(struct Node *ptr)
//  {
//     while(ptr!=NULL)
//     {
//         printf("element:%d\n",ptr->data);
//         ptr=ptr->Next;
//     }
//  }

//  struct Node *deleteAtIndex(struct Node *head, int index)
//  {
//     struct Node *p=head;
//     struct Node *q=head->Next;
//     for(int i=0;i<index-1;i++)
//     {
//         p=p->Next;
//         q=q->Next;

//     }
//     p->Next=q->Next;
//     free(q);
//     return head;
//  }

//  int main()
//  {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head=(struct Node *)malloc(sizeof(struct Node));
//     second=(struct Node *)malloc(sizeof(struct Node));
//     third=(struct Node *)malloc(sizeof(struct Node));
//     fourth=(struct Node *)malloc(sizeof(struct Node));

//     head->data=2;
//     head->Next=second;

//     second->data=3;
//     second->Next=third;

//     third->data=6;
//     third->Next=fourth;

//     fourth->data=8;
//     fourth->Next=NULL;

//     printf("LinkedList before deletion\n");
//     LinkedListTraversal(head);
//     head=deleteAtIndex(head,2);
//     printf("LinkedList after deletion\n");
//     LinkedListTraversal(head);
    
//     return 0;
//  }

 //self practice

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
      printf("element:%d\n",ptr->data);
      ptr=ptr->Next;

   }
 }
 struct Node *deleteAtIndex(struct Node *head,int index) 
 {
   struct Node *p=head;
   struct Node *q=head->Next;
   for(int i=0;i<index-1;i++)
   {
      p=p->Next;
      q=q->Next;
   }
   p->Next=q->Next;
   free(q);
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

   head->data=6;
   head->Next=second;

   second->data=7;
   second->Next=third;

   third->data=2;
   third->Next=fourth;

   fourth->data=5;
   fourth->Next=NULL;


   printf("LinkedList before deletion\n");
   LinkedListTraversal(head);
   head=deleteAtIndex(head,2);
   printf("LinkedListafter deletion\n");
   LinkedListTraversal(head);

   return 0;

 }
// #include<stdio.h>
// #include<conio.h>



// //traversal
// int traversal(int arr[],int n){

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
        
//     }
//     printf("\n");
// }
       


// int insertion(int arr[],int size,int capacity,int index ,int element){

//     if (size>=capacity){


//      return -1;
//     }
//       for(int i=size-1;i>=index;i--)
//       {
//          arr[i+1]=arr[i];
//       }
//     arr[index]=element;
//          return 1;


// }
// int main()
// {
//   int  arr[110]={5,8,7,78,32};

//     int size=5;
//     int capacity=11;
//     int index=2;
//     int element=48;
//     printf("before insertion ");

//  traversal(arr,size);
//     insertion(arr,size,110,index,element);
// size+=1;
//      printf("after insertion ");
//      traversal(arr,size);
     



//     return 0;
// }











//for self practice
// #include<stdio.h>
// #include<conio.h>
 
// int traversal(int arr[],int n)
// {
//   for(int i=0;i<n;i++)
//    {
//      printf("%d  ",arr[i]);
//    }
//   printf("\n");
// }

// int insertion(int arr[],int capacity,int size,int index,int element)
// {
//   if(size>=capacity)
//   {
//     return -1;
//   }
//   for(int i=size-1;i>=index;i--)
//   {
//     arr[i+1]=arr[i];
//   }
//     arr[index]=element;
//       return 1;
// }

// int main()
// {
//   int arr[100]={2,7,9,4,8,3};
//   int capacity=20;
//   int size=6;
//   int index=2;
//   int element=10;
//   printf("before insertion");
//   traversal(arr,size);
//   insertion(arr,100,size,index,element);
//   size+=1;
//   printf("after insertion");
//   traversal(arr,size);

//   return 0;

// }

// #include<stdio.h>
// #include<conio.h>

// int traversal(int arr[],int n)
// {
//   for(int i=0;i<n;i++)
//    {
//      printf("%d  ",arr[i]);
//    }
//    printf("\n");
// }

// int insertion(int arr[],int capacity,int size,int index,int element)
// {
//   if(size>=capacity)
//   {
//     return -1;
//   }
//   for(int i=size-1;i>=index;i--)
//   {
//     arr[i+1]=arr[i];
//   }
//   arr[index]=element;
//     return 1;
// }

// int main()
// {
//   int arr[100]={5,9,3,2,4,1};
//   int capacity=29;
//   int size=6;
//   int index =2;
//   int element =8;
//   printf("before insertion");
//   traversal(arr,size);
//   insertion(arr,100,size,index,element);
//   size+=1;
//   printf("after insertion");
//   traversal(arr,size);


//   return 0;
// }



//self practice
// #include<stdio.h>
// #include<conio.h>
// int traversal(int arr[],int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     printf("%d\n",arr[i]);

//   }
// }
// int insertion(int arr[],int capacity,int size,int index,int element)
// {
//   if(size>=capacity)
//   {
//     return -1;
//   }
//   for(int i=size-1;i>=index;i--)
//   {
//     arr[i+1]=arr[i];
//   }
//   arr[index]=element;
//   return 1;

// }

// int main()
// {
//   int arr[]={4,8,5,2,7};
//   int capacity=20;
//   int size=5;
//   int index=3;
//   int element=6;
//   printf("before insertion");
//   traversal(arr,size);
//   insertion(arr,100,size,index,element);
//   size+=1;
//   printf("after insertion");
//   traversal(arr,size);

//   return 0;
// }

//self practice
#include<stdio.h>
#include<conio.h>

int Traversal(int arr[],int n)
{
  for (int  i = 0; i < n; i++)
  {
    printf("  %d\n",arr[i]);
  }
  
}

int Insertion(int arr[],int capacity,int size,int index,int element)
{
  for(int i=size-1;i>=index;i--)
  {
     arr[i+1]=arr[i]; 
  }
}

int main()
{
  int arr[]={8,4,2,6,1};
  int capacity=100;
  int size=5;
  int index=3;
  int element=5;
  printf("before insertion");
  Traversal(arr,size);
  Insertion(arr,capacity,size,index,element);
  size+=1;
  printf("after insertion");
  Traversal(arr,size);

  return 0;

}
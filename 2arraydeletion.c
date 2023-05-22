// #include<stdio.h>
// #include<conio.h>
// int traversal(int arr[],int n){

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
        
//     }
//     printf("\n");
// }
       
// int deletion(int arr[],int size,int index){
//     for(int i =index;i<size-1;i++)
//     {
//       arr[i]=arr[i+1];
//     }
// }


// int main()
// {
//     int arr[]={6,7,4,6,9};
//     int size=5;int index=2;
//     printf("before deletion");
//     traversal(arr,size); 
//     deletion(arr,size,index);
//     size-=1;
//     printf("after deletion");
//  traversal(arr,size);

    
//     return 0;
// }


//for self practice


// self
// #include<stdio.h>
// #include<conio.h>
// int traversal(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf(" %d\n",arr[i]);
//     }

// }
// int deletion(int arr[],int size,int index)
// {
//     for(int i=index;i<size-1;i++)
//     {
        
//         arr[i]=arr[i+1];

//     }

// }

// int main(){
//     int arr[]={4,8,2,6,4};
//     int size=5;
//     int index=1;
//     printf("before deletion");
//     traversal(arr,size);
//     deletion(arr,size,index);
//     size-=1;
//     printf("after deletion");
//     traversal(arr,size);

//     return 0;
// }





   //self practice

//    #include<stdio.h>
//    #include<conio.h>

//    int traversal(int arr[],int n)
//    {
//        for(int i=0;i<n;i++)
//        {
//            printf("%d\n",arr[i]);
           
//        }
//    }
//    int deletion(int arr[],int size,int index)
//    {
//        for(int i=index;i<size-1;i++)
//        {
//            arr[i]=arr[i+1];

//        }

//    }
//    int main()
//    {
//        int arr[]={3,5,9,1,7};
//        int size=5;
//        int index=2;
//        printf("before deletion");
//        traversal(arr,size);
//        deletion(arr,size,index);
//        size-=1;
//        printf("after deletion");
//        traversal(arr,size);

//        return 0;

//    }

   //self practice
   #include<stdio.h>
   #include<conio.h>
   int Traversal(int arr[],int n)
   {
    for(int i=0;i<n;i++)
    {
        printf("  %d\n",arr[i]);
    }
   }

   int Deletion(int arr[],int size,int index)
   {
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
   }

   int main()
   {
    int arr[]={4,6,8,2,9};
    int size=5;
    int index=2;
    printf("before traversal");
    Traversal(arr,size);
    Deletion(arr,size,index);
    size-=1;
    printf("after traversal");
    Traversal(arr,size);

    return 0;
}

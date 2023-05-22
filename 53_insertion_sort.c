// #include<stdio.h>

// void printArray(int* A,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d  ",A[i]);
//     }
//     printf("\n");
// }

// void insertionSort(int *A,int n){

//     int key,j;
//     for(int i=1;i<=n-1;i++){
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key){
//             A[j+1]=A[j];
//             j--;

//         }
//         A[j+1]=key;
//     }

// }

// int main(){
//           // 0  1  2  3  4  5
//     int A[]={12,54,65,7,23,9};
//     // printf(" enter number of elements:");
//     int n=6;
//     printArray(A,n);
//     insertionSort(A,n);
//     printArray(A,n);
//     return 0;
// }


//for practice
// #include<stdio.h>
// void printArray(int* A,int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);

//     }
//     printf("\n");
// }
// void insertionsort(int *A,int n)
// {
//     int i,j,key;
//     for(i=1;i<n-1;i++)
//     {
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key)
//         {
//             A[j+1]=A[j];
//             j--;
//         }
//         A[j+1]=key;
//     }

// }
// int main()
// {
//     int A[]={6,2,1,8,4};
//     int n=5;
//     printArray(A,n);
//     insertionsort(A,n);
//     printArray(A,n);
//     return 0;
// }




//for practice
// #include<stdio.h>
// #include<conio.h>
// void printArray(int A[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);
//     }
//         printf("\n");
    
// }
// void insertionsort(int A[],int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key)
//         {
//             A[j+1]=A[j];
//             j--;

//         }
//         A[j+1]=key;
//     }
// }
// int main()
// {
//     int A[]={4,2,8,9};
//     int n=4;
//     printArray(A,n);
//     insertionsort(A,n);
//     printf("Sorted array is:");
//     printArray(A,n);
//     return 0;
// }


//for practice
// #include<stdio.h>
// #include<conio.h>
// void printArray(int A[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);

//     }
//     printf("\n");
// }
// void insertionsort(int A[],int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key)
//         {
//             A[j+1]=A[j];
//             j--;
//         }
//         A[j+1]=key;
//     }
// }
// int main()
// {
//     int A[]={2,8,1,5,3};
//     int n=5;
//     printArray(A,n);
//     insertionsort(A,n);
//     printf("Sorted array is:");
//     printArray(A,n);
//     return 0;
// }




//for practice
// #include<stdio.h>
// #include<conio.h>
// void printarray(int A[],int n)
// {
//     int i;
//     for ( i = 0; i < n; i++)
//     {
//         printf("   %d",A[i]);
//     }
//     printf("\n");
    
// }
// void insertionsort(int  A[],int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key)
//         {
//             A[j+1]=A[j];
//             j--;
//         }
//         A[j+1]=key;
//     }
// }
// int main()
// {
//     int A[]={6,7,3,2,4,9};
//     int n=6;
//     printf("\nArray before sorted is");
//     printarray(A,n);
//     insertionsort(A,n);
//     printf("Sorted array is:");
//     printarray(A,n);
//     return 0;

// }




//for practice
// #include<stdio.h>
// #include<conio.h>
// void printarray(int A[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);
//     }
//     printf("\n");
// }
// void insertionsort(int A[],int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key)
//         {
//             A[j+1]=A[j];
//             j--;
//         }
//         A[j+1]=key;
//     }
// }
// int main()
// {
//    int A[]={4,5,6,2,1,9};
//    int n=6;
//    printf("Array before sorted");
//    printarray(A,n);
//    insertionsort(A,n);
//    printf("\nSorted array is:");
//    printarray(A,n);
//    return 0;
// }




//insertion sort for practice
// #include<stdio.h>
// #include<conio.h>
// void printarray(int A[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);

//     }
//     printf("\n");
// }
// void insertionsort(int A[],int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key=A[i];
//         j=i-1;
//         while(j>=0 && A[j]>key)
//         {
//             A[j+1]=A[j];
//             j--;
//         }
//         A[j+1]=key;
//     }
// }
// int main()
// {
//     int A[]={6,3,9,1};
//     int n=4;
//     printf("Array before sorted:");
//     printarray(A,n);
//     insertionsort(A,n);
//     printf("\nSorted Array is:");
//     printarray(A,n);
//     return 0;
// }





//for practice
#include<stdio.h>
#include<conio.h>
void printarray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("  %d",A[i]);
    }
    printf("\n");

}
void insertionsort(int A[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
       key=A[i];
       j=i-1;
       while(j>=0 && A[j]>key)
       {
        A[j+1]=A[j];
        j--;
       } 
       A[j+1]=key;

    }
    
}
int main()
{
    int A[]={5,8,1,26,45,23};
    int n=6;
    printf("Array before sorted");
    printarray(A,n);
    insertionsort(A,n);
    printf("\nsorted array is:");
    printarray(A,n);
    return 0;
}
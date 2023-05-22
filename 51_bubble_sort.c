// #include<stdio.h>

// void printArray(int* A,int n){
//     for(int i=0;i<n;i++)
//     {
//         printf("%d   ",A[i]);
//     }
//     printf("\n");

// }
// void bubbleSort(int *A,int n){
//     int temp;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(A[j]>A[j+1]){
//                 temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
//         }
//     }
// }
// void bubbleSortAdaptive(int *A,int n){
//     int temp;
//     int isSorted=0;
//     for(int i=0;i<n-1;i++){
//         printf("Working on pass number %d\n",i+1);
//         isSorted=1;
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(A[j]>A[j+1]){
//                 temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//                 isSorted=0;

//             }
//         }
//         if(isSorted){
//             return ;
//         }
//     }
// }
// int main(){
//     // int A[]={12,54,65,7,23,9};
//     int A[]={1,2,3,45,59,6};
//     int n=6;
//     printArray(A,n);
//     bubbleSortAdaptive(A,n);
//     printArray(A,n);
//     return 0;
// }








//for practice
// #include<stdio.h>
// void printArray(int *A,int n)
// {
//     int i;
//     for(i=0;i<n;i++){
//     printf("   %d",A[i]);
//     }
//     printf("\n");
// }
// void bubblesort(int *A,int n)
// {
//     int temp,i,j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 int temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
    
//         }
//     }
// }
// int main()
// {
//     int A[]={4,7,1,5,8};
//     int n=5;
//     printArray(A,n);
//     bubblesort(A,n);
//     printArray(A,n);
//     return 0;
// }




//for practice
// #include<stdio.h>
// void printArray(int *A,int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf(" %d",A[i]);
//     }
//     printf("\n");
// }
// void bubblesort(int *A,int n)
// {
//     int i,j,temp;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 int temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int A[]={4,2,7,1};
//     int n=4;
//     printArray(A,n);
//     bubblesort(A,n);
//     printArray(A,n);
//     return 0;
// }




//for practice
// #include<stdio.h>
// void printArray(int A[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//     printf("  %d",A[i]);
//     }
//     printf("\n");

// }
// void bubblesort(int A[],int n)
// {
//     int i,j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 int temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int A[]={4,7,1,5,2};
//     int n=5;
//     printArray(A,n);
//     bubblesort(A,n);
//     printf("Sorted Array is:");
//     printArray(A,n);
//     return 0;
// }





//for practice
// #include<stdio.h>
// void printArray(int A[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf(" %d",A[i]);
//     }
//     printf("\n");
// }
// void bubblesort(int A[],int n)
// {
//     int i,j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 int temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int A[]={6,3,1,9,7};
//     int n=5;
//     printArray(A,n);
//     bubblesort(A,n);
//     printf("Sorted array is: ");
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
//     printf("   %d",A[i]);
//     }
//     printf("\n");
// }
// void bubblesort(int A[],int n)
// {
//     int i,j;
//     for(i=0;i<(n-1);i++)
//     {
//         for(j=0;j<(n-1-i);j++)
//         {
//             if(A[j]>A[j+1])
//             {
//             int temp=A[j];
//             A[j]=A[j+1];
//             A[j+1]=temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int A[]={4,2,8,5,1,6};
//     int n=6;
//     printArray(A,n);
//     bubblesort(A,n);
//     printf("Sorted array is:");
//     printArray(A,n);
//     return 0;
//  }





 //for practice 
//  #include<stdio.h>
//  #include<conio.h>
//  void printArray(int A[],int n)
//  {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);
//     }

//  }
//  void bubblesort(int A[],int n)
//  {
//    int i,j;
//    for(i=0;i<n-1;i++)
//    {
//     for(j=0;j<n-1-i;j++)
//     {
//         if (A[j]>A[j+1])
//         {
//             int temp=A[j];
//             A[j]=A[j+1];
//             A[j+1]=temp;
        
//         }
//     }
//    }
//  }
//  int main()
//  {
//     int A[]={5,7,2,1};
//     int n=4;
//     printf("\nArray before sorted");
//     printArray(A,n);
//     bubblesort(A,n);
//     printf("\nArray after sorted");
//     printArray(A,n);
//     return 0;
//  }


//for practice
#include<stdio.h>
#include<conio.h>
void printArray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("  %d",A[i]);
    }
}
void bubblesort(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

}
int main()
{
    int A[]={9,1,3,5,0,6};
    int n=6;
    printf("Array before sorted");
    printArray(A,n);
    bubblesort(A,n);
    printf("\nArray after sorted");
    printArray(A,n);
    return 0;
}
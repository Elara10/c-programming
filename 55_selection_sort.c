// #include<stdio.h>

// void printArray(int* A,int n){
//     for(int i=0;i<n;i++){
//         printf("%d   ",A[i]);
//     }
//     printf("\n");
// }
// void selectionSort(int *A,int n){
//     int indexofMin;
//     int temp;
    
//     printf("Running selection sort..\n");
//     for(int i=0;i<n-1;i++){
//         indexofMin=i;
//          for(int j=i+1;j<n;j++){
//             if(A[j]<A[indexofMin]){
//             indexofMin=j;

//             }
//         }
//         //swap A[i] and A[indexofArray]
//        temp=A[i];
//        A[i]=A[indexofMin];
//        A[indexofMin]=temp;
//     }

// }
// int main(){
//     int A[]={3,5,2,13,12};
//     int n=5;
//     printArray(A,n);
//     selectionSort(A,n);
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
//         printf("  %d",A[i]);
//     }
//     printf("\n");
// }
// void selectionSort(int *A,int n)
// {
//     int i;
//     int temp;
//     int indexofMin;
//     printf("Running selectionsort..\n");
//     for(int i=0;i<n-1;i++)
//     {
//         indexofMin=i;
//         for(int j=i+1;j<n;j++){
//         if(A[j]<A[indexofMin])
//         {
//             indexofMin=j;

//         }
//     }
//     temp=A[i];
//     A[i]=A[indexofMin];
//     A[indexofMin]=temp;
//     }


// }
// int main()
// {
//     int A[]={5,2,9,1,4};
//     int n=5;
//     printArray(A,n);
//     selectionSort(A,n);
//     printArray(A,n);
//     return 0;
// }




// for practice
// #include<stdio.h>
// void printArray(int *A,int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("  %d",A[i]);

//     }
//     printf("\n");

// }
// void selectionSort(int *A,int n)
// {
//     int i;
//     int temp;
//     int indexofMin;
//     printf("Running selectionsort...\n");
//     for(int i=0;i<n-1;i++)
//     {
//         indexofMin=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(A[j]<A[indexofMin])
//             {
//                 indexofMin=j;
//             }
//         }
    
//         temp=A[i];
//         A[i]=A[indexofMin];
//         A[indexofMin]=temp;
//     }
// }
// int main()
// {
//     int A[]={5,2,8,7,3};
//     int n=5;
//     printArray(A,n);
//     selectionSort(A,n);
//     printArray(A,n);
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
// void selectionsort(int A[],int n)
// {
//     int i;
//     int temp;
//     int indexofMin;
//     printf("Running selectionsort......\n");
//     for(int i=0;i<n-1;i++)
//     {
//         indexofMin=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(A[j]<A[indexofMin])
//             {
//                 indexofMin=j;
//             }
//         }
//         temp=A[i];
//         A[i]=A[indexofMin];
//         A[indexofMin]=temp;
//     }

// }
// int main()
// {
//     int A[]={4,8,1};
//     int n=3;
//     printf("Array before sorted");
//     printarray(A,n);
//     selectionsort(A,n);
//     printf("After sorted is:");
//     printarray(A,n);
//     return 0;
// }



//for practice
#include<stdio.h>
#include<conio.h>
void printArray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
}
void selectionsort(int A[],int n)
{
    int i;
    int temp;
    int indexofMin;
    printf("Running selectionsort");
    for(i=0;i<n;i++)
    {
        indexofMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[indexofMin])
            {
                indexofMin=j;
            }
        }
        temp=A[i];
        A[i]=A[indexofMin];
        A[indexofMin]=temp;
    }
 

}
int main(){
    int A[]={6,5,4,3};
    int n=4;
    printf("Before sorted array:");
    printArray(A,n);
    selectionsort(A,n);
    printf("Sorted array is:");
    printArray(A,n);
    return 0;
}
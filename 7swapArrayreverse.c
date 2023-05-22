#include<stdio.h>
#include<conio.h>

int traversal(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

int swap(int arr[],int n)
{
 int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[(n-1)-i];
        arr[(n-1)-i]=temp;

    }
}

int main()
{
    int arr[]={4,8,2,5};
    int n=4;
    printf(" before swapping ");
    traversal(arr,n);
    
    printf(" after swapping " );
    swap(arr,n);
    traversal(arr,n);


    
}
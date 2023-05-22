#include<stdio.h>
#include<conio.h>


int traverse(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int reverse(int arr[],int n)
  {
     for(int i=n-1;i>=0;i--){
         printf("%d ",arr[i]);
     }
  }


int main()
{
    int arr[]={3,6,4,9,2};
  
    printf("before reverse ");
    traverse(arr,5);
    printf("after reverse ");
    reverse(arr,5);
}
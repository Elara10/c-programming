#include<stdio.h>

void printArray(int* A,int n){
    for(int i=0;i<n;i++){
        printf("  %d",A[i]);
    }
    printf("\n");
}
int partition(int A[],int low,int high){
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    }while(i<j);
    //swap A[low] and A[j]
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}


void quickSort(int A[],int low,int high){
    int partitionIndex;
    if(low<high){
    partitionIndex=partition(A,low,high);
    printArray(A,9);
    quickSort(A,low,partitionIndex-1);//sort  left array
    quickSort(A,partitionIndex+1,high);//sort right array
    }
}


int main(){
    int A[]={3,5,2,13,12,3,2,13,45};
    int n=9;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
    return 0;
}



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
int partition(int A[],int low,int high)
{
  int pivot=A[low];
  int i=low+1;  
  int j=high;
  int temp;
  do{
    while(A[i]<=pivot)
    {
        i++;
    }
    while(A[j]>pivot)
    {
        j--;
    }
    if(i<j)
    {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;

    }

  }
  while(i>j);
  
    int temp=A[low];
    A[low]=A[j];
    A[j]=temp;
  
}
void quicksort(int A[],int low ,int high){
    int partitionindex;
    if(low<high){
        
    }
}
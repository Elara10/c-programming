#include<stdio.h>
#include<conio.h>

int subarray(int arr[],int n)
{

        int cur=0;
        int max=0;
    for(int i=0;i<n;i++)
    {

        cur=arr[i]+cur;
        if (cur>max)
        {
          max=cur;
        }
        if(cur<0)
        {
          cur=0;


        }

        
    }
    return max;

}

int main()
{
    int arr[]={4,-7,-2,9,6};
    printf("%d",subarray(arr,5));
}
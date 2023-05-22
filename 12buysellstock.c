#include<stdio.h>
#include<conio.h>
#include<math.h>

int buysell(int arr[],int n)
{
    int maxprofit=0;
    int minsofar=arr[0];
    int profit;
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            minsofar=math.min(minsofar,arr[i]);
            profit=arr[i]-minsofar;
            maxprofit=math.max(maxprofit,profit);
              
        }
        
    }
}

int main()
{
    buysell(n);
}

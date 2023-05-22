#include<stdio.h>
#include<conio.h>
int main()
{
    int sizeMemoryBlock[10];/*Block size*/
    int sizeProcess[10];/*Process size*/
    int nMemoryBlock;/*Block Number*/
    int nProcess;/*Process Size*/
    int flags[10];
    int allocation[10];
    int i;
    int j;
    for(i=0;i<10;i++)
    {
        flags[i]=0;
        allocation[i]=-1;

    }
    printf("Enter the Number of Memory Blocks:");
    scanf("%d",&nMemoryBlock);
    for(i=0;i<nMemoryBlock;i++)
    {
        printf("\nEnter the Size of Memory Block Number[%d]:",i+1);
        scanf("%d",&sizeMemoryBlock[i]);
    }
    printf("Enter the number of Processes:");
    scanf("%d",&nProcess);
    for(i=0;i<nProcess;i++)
    {
        printf("\nEnter the size of Process  Number[%d]: ",i+1);
        scanf("%d",&sizeProcess[i]);
    }
    for(i=0;i<nProcess;i++)
    {
        for(j=0;j<nMemoryBlock;j++)
        {
            if(flags[j]==0 && sizeMemoryBlock[j]>=sizeProcess[i])
            {
                allocation[j]=i;
                flags[j]=1;
                break;
            }
        }
    }
    printf("\nBlock Number:Block Size:Process Number:ProcessSize:fragmentation of  memory");
    for(i=0;i<nMemoryBlock;i++)
    {
        printf("\n%d\t\t%d\t\t",i+1,sizeMemoryBlock[i]);
        if(flags[i]==1)
        {
            printf("%d\t\t\t%d\t\t%d",allocation[i]+1,sizeProcess[allocation[i]],sizeMemoryBlock[i]-sizeProcess[allocation[i]]);
        }
        else{
            printf("Not Allowed");
        }
    }
    getch();
}

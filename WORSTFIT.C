#include<stdio.h>
#include<conio.h>
void main()
{
int fragments[10],blocks[10],processes[10];
int m,n nb,np,temp,top=0;
static int blocks_arr[10],process_arr[10];
clrscr();
printf("\nEnter the total  Number of blocks:");
scanf("%d",&nb);
printf("\nEnter the total number of processes:");
scanf("%d",&np);
printf("\nEnter  the size of the blocks:\n");
     for(m=0;m<nb;m++)
     {
        printf("Block No.[%d]:",m+1);
        scanf("%d",&blocks[m]);
     }
     printf("Enter the size of the processes:\n");
     for(m=0;m<np;m++)
     {
        printf("Process No.[%d]:",m+1)
        scanf("%d",&processes[m]);

     }
     for(m=0;m<np;m++)
     {
     for(n=0;n<nb;n++)
     {
     if(blocks_arr[n]!=1)
     {
        temp=blocks[n]-processes[m];
        if (temp>0)
        {
            if(top<temp)
            {
                process_arr[m]=n;
                top=temp;
            }
        }
     }
     fragments[m]=top;
     blocks_arr[process_arr[m]]=1;
     top=0;
     }
   }
   printf("\nProcess Number\tProcess Size\tBlock Number\tBlock Size\tFragments");
   for(m=0;m<np;m++);
   {
    printf("\n %d\t\t%d\t\t%d\t\t%d\t\t%d",m+1,processes[m],process_arr[m],blocks[process_arr[m]],fragments[m]);
   }
   printf("\n");
   getch();
     


}
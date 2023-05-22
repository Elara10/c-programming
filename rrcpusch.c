#include<stdio.h>
#include<conio.h>
void main();
     int i;
     int nProcess;
     int sum=0;
     int count=0;
     int nProcessDuplicate;
     int TQ;
     int WT=0;
     int TAT=0;
     int AT[10];
     int BT[10];
     int Temp[10];
     float AverageWaitingTime;
     float AverageTimearoundTime;
     clrscr();
     {
     printf("Enter the no. of processes:");
     scanf("%d",&nProcess);
     nProcessDuplicate=nProcess;
     for(i=0;i<nProcess;i++)
     {
        printf("Enter the arrival time of the Process Number",i+1);
        scanf("%d",&AT[i]);
        printf("Enter the Burst time of the Process Number::[%d]",i+1);
        scanf("%d",&BT[i]);
        Temp[i]=BT[i];
     }
     printf("Enter the value of Time Quantum for the Processing :[%d]",i+1);
     scanf("%d",&TQ);
     printf("\nProcess No. \t Burst Time  \t TAT \t Waiting Time");
     for(Sum=0,i=0;nProcessDuplicate!=0;)
     {
        Sum=Sum+Temp[i];
        Temp[i]=0;
        count=1;

     }
     else if(Temp[i]>0){
        Temp[i]=Temp[i]-TQ;
        Sum=Sum+TQ;
     }
     if(Temp[i]==0 &&  count==1)
     {
        nProcessDuplicate-:
        printf("nProcess No[%d]\t  %d\t\t %d\t\t %d"i+1,BT[i],Sum-AT[i],AT[i],WT[i])
     }

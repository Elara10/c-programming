/*
	Qus. What is First Fit Memory Management Scheme?
	Anw. In this scheme we check the blocks in a sequential manner which means we pick the first process then compare it’s size with first block size if it is less than size of block it is allocated otherwise we move to second block and so on.
	     When first process is allocated we move on to the next process until all processes are allocated.

	First Fit Algorithm

	1. Get no. of Processes and no. of blocks.
	2. After that get the size of each block and process requests.
	3. Now allocate processes
	   if(sizeBlock>=sizeProcess)
	      allocate the process
	   else
	      move on to next block
	4. Display the processes with the blocks that are allocated to a respective process.
	5. end
*/

#include<stdio.h>
#include<conio.h>
void main()
  {
      int sizeMemoryBlock[10];/*Block Size*/
      int sizeProcess[10];/*Process Size*/
      int nMemoryBlock;/*Block Number*/
      int nProcess;/*Process Size*/
      int flags[10];
      int allocation[10];
      int i;
      int j;
      clrscr();
      for(i=0;i<10;i++)
	{
	    flags[i]=0;
	    allocation[i]=-1;
	}
      printf("Enter the Number of Memory Blocks:");
      scanf("%d", &nMemoryBlock);
      for(i=0;i<nMemoryBlock;i++)
	{
	    printf("\nEnter the Size of Memory Block Number[%d]:",i+1);
	    scanf("%d",&sizeMemoryBlock[i]);
	}
      printf("\nEnter the Number of Processes:");
      scanf("%d", &nProcess);
      for(i = 0; i < nProcess; i++)
	{
	    printf("\nEnter the Size of Process Number[%d]:",i+1);
	    scanf("%d", &sizeProcess[i]);
	}
      /*allocation as per first fit*/
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
      /*display allocation details*/
      printf("\nBlock Number| Block Size|Process Number|Process Size|Loss of Memory");
      for(i=0;i<nMemoryBlock;i++)
	{
	    printf("\n%d\t\t%d\t\t", i+1,sizeMemoryBlock[i]);
	    if(flags[i]==1)
	      {
		printf("%d\t\t\t%d\t\t%d",allocation[i]+1,sizeProcess[allocation[i]],sizeMemoryBlock[i]-sizeProcess[allocation[i]] );
	      }
	    else
	      {
		printf("Not Allocated");
	      }
	}
      getch();
  }

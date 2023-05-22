/*
	Qus. What is Best Fit Memory Management Scheme?
	Ans. Best fit uses the best memory block based on the Process memory request. In best fit implementation the algorithm first selects the smallest block which can adequately fulfill the memory request by the respective process.
	     Because of this memory is utilized optimally but as it compares the blocks with the requested memory size it increases the time requirement and hence slower than other methods. It suffers from Internal Fragmentation which simply means that the memory block size is greater than the memory requested by the process, then the free space gets wasted.
	     Once we encounter a process that requests a memory which is higher than block size we stop the algorithm.

	Best Fit Algorithm

	1. Get no. of Processes and no. of blocks.
	2. After that get the size of each block and process requests.
	3. Then select the best memory block that can be allocated using the above definition.
	4. Display the processes with the blocks that are allocated to a respective process.
	5. Value of Fragmentation is optional to display to keep track of wasted memory.
	6. end.
*/

#include<stdio.h>
#include<conio.h>
void main()
  {
     int nMemoryBlocks;
     int nProcess;
     int fragment[20];
     int sizeMemoryBlock[20];
     int sizeProcess[20];
     int i;
     int j;
     int temp;
     int lowest=9999;
     static int statusMemoryBlock[20];
     static int statusProcess[20];
     clrscr();
     printf("\n\t\t\tMemory Management Scheme - Best Fit");
     printf("\nEnter the Number of Memory Blocks:");
     scanf("%d",&nMemoryBlocks);
     printf("Enter the Number of Processes to be Loaded:");
     scanf("%d",&nProcess);
     for(i=0;i<nMemoryBlocks;i++)
       {
	   printf("\nEnter the Size of the Memory Block[%d]:-",i+1);
	   scanf("%d",&sizeMemoryBlock[i]);
       }
     for(i=0;i<nProcess;i++)
       {
	   printf("\nEnter the Size of the Process Number[%d]:-",i+1);
	   scanf("%d",&sizeProcess[i]);
       }
     for(i=0;i<nProcess;i++)
       {
	   for(j=0;j<nMemoryBlocks;j++)
	     {
		 if(statusMemoryBlock[j]!=1)
		   {
		     //if(sizeMemoryBlock[j]>= sizeProcess[i])

			    temp=sizeMemoryBlock[j]-sizeProcess[i];

		   }
		 if(temp>=0)
		   {
		     if(lowest>temp)
		       {
			  statusProcess[i]=j;
			  lowest=temp;
		       }
		   }
	     }

	   fragment[i]=lowest;
	   statusMemoryBlock[statusProcess[i]]=1;
	   lowest=10000;
	 }
     printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
     for(i=0;i<=nProcess && statusProcess[i]!=0;i++)
       {
	   printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,sizeProcess[i],statusProcess[i],sizeMemoryBlock[statusProcess[i]],fragment[i]);
       }
     getch();
  }

// #include<stdio.h>
// int main()
// {
// 	int windowsize,sent=0,ack,i;
// 	printf("enter window size\n");
// 	scanf("%d",&windowsize);
// 	while(1)
// 	{
// 		for( i = 0; i < windowsize; i++)
// 			{
// 				printf("Frame %d has been transmitted.\n",sent);
// 				sent++;
// 				if(sent == windowsize)
// 					break;
// 			}
// 			printf("\nPlease enter the last Acknowledgement received.\n");
// 			scanf("%d",&ack);
			
// 			if(ack == windowsize)
// 				break;
// 			else
// 				sent = ack;
// 	}
// return 0;
// }



//for practice
// #include<stdio.h>
// int main()
// {
//     int windowsize,sent=0,ack,i;
//     printf("Enter windowsize\n");
//     scanf("%d",&windowsize);
//     while(1)
//     {
//         for(i=0;i<windowsize;i++)
//         {
//             printf("Frane %d has been transmitted\n",sent);
//             sent++;
//             if(sent==windowsize)
//             break;
//         }
//         printf("\nPlease enter last acknowledgement received \n");
//         scanf("%d",&ack);
//         if(ack==windowsize)
//         break;
//         else sent=ack;

//     }
//     return 0;
//     }


//for practice
// #include<stdio.h>
// int  main()
// {
//     int windowsize,i,ack,sent=0;
//     printf("Enter window size\n");
//     scanf("%d",&windowsize);
//     while(1)
//     {
//     for(i=0;i<windowsize;i++)
//     {
//         printf("Frame %d has been transmitted\n",sent);
//         sent++;
//         if(windowsize==sent)
//         break;
//     }

//     printf("Please enter the last acknowledgement received\n");
//     scanf("%d",&ack);
//     if(ack==windowsize)
//       break;
//     else 
//     sent=ack;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int windowsize,i,sent=0,ack;
//   printf("Enter windowsize\n:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//     for(int i=0;i<windowsize;i++)
//     {
//       printf("Frame %d has been transmitted\n",sent);
//       sent++;
//      if(windowsize==sent)
    
//       break;
//     }
//     printf("Enter the last acknowledgement received\n:");
//     scanf("%d",&ack);
//     if(ack==windowsize)
//     break;
//     else 
//     sent=ack;

//    }
//    return 0;
// }

//for practice
// #include<stdio.h>
// int main()
// {
//   int ack,sent=0,windowsize,i;
//   printf("Enter windowsize:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//     for(int i=0;i<windowsize;i++)
//     {
//     printf("Frame %d has  been transmitted\n:",sent);
//    sent++;
//    if(windowsize==sent)
//    break;
//   }
//   printf("Enter the last acknowledgement received\n:");
//   scanf("%d",&ack);
//   if(ack==windowsize)
//   break;
//   else
//   sent=ack;
// }
// return 0;
// }



//for practice
// #include<stdio.h>
// int main()
// {
//   int i,windowsize,sent=0,ack;
//   printf("Enter the size of windowsize\n:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//     for(i=0;i<windowsize;i++){

    
//     printf("Frame %d is transmitted\n",sent);
//     sent++;
//     if(windowsize==sent)
//     break;
//   }
//   printf("Enter the last acknowledgement received\n:");
//   scanf("%d",&ack);
//   if(ack==windowsize)
//   break;
//   else
//   sent=ack;
// }
// return 0;
// }





//for practice


// #include<stdio.h>
// int main()
// {
//   int i,sent=0,ack,windowsize;
//   printf("Enter the windowsize\n:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//     for(i=0;i<windowsize;i++)
//     {
//       printf("Frame %d  is transmitted\n",sent);
//       sent++;
//       if(windowsize==sent)
//       break;


//     }
//     printf("Enter the last acknowledgement\n:");
//     scanf("%d",&ack);
//     if(ack==windowsize)
//     break;
//     else
//     sent=ack;

//   }
//   return 0;
// }


//for practice
// #include<stdio.h>
// int main()
// {
//   int i,ack,sent=0,windowsize;
//   printf("Enter windowsize:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//     for(i=0;i<windowsize;i++)
      //  {
//     printf("Frame %d is transmitted\n:",sent);
//     sent++;
//     if(sent==windowsize)
//     break;
      //  }
//     printf("Enter the last acknowledgement:");
//     scanf("%d",&ack);
//     if(ack==windowsize)
//     break;
//     else
//     sent=ack;
//   }
//   return 0;

// }



//for practice
// #include<stdio.h>
// int main()
// {
//   int i,windowsize,ack,sent=0;
//   printf("Enter windowsize:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//     for(i=0;i<windowsize;i++){
//     printf("Frame %d is transmitted\n:",sent);
//     sent++;
//     if(sent==windowsize)
//     break;

//   }
//   printf("Enter the last aknowledgement receives\n");
//   scanf("%d",&ack);
//   if(ack==windowsize)
//   break;
//   else
//   sent=ack;
//   }
//   return 0;

// }







//for practice
// #include<stdio.h>
// int main()
// {
//   int windowsize,ack,i,sent=0;
//   printf("Enter the windowsize\n:");
//   scanf("%d",&windowsize);
//   while(1)
//   {
//      for(i=0;i<windowsize;i++){
//      printf("Frame %d is transmitted\n:",sent);
//      sent++;
//      if(sent==windowsize)
//      break;
//      }
//        printf("\nPlease enter the last acknowledgement received:");
//        scanf("%d",&ack);
//        if(ack==windowsize)
//        break;
//        else
//        sent=ack;
//   }
//   return 0;
// }




//for practice
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//       int i,windowsize,ack,sent=0;
//       printf("Enter the  windowsize:");
//       scanf("%d",&windowsize);
//       while(1)
//       {
//             for(i=0;i<windowsize;i++){
//             printf("Frame  %d is transmitted\n",sent);
//            sent++;
//            if(sent==windowsize)
//            break;
//             }
            
//                   printf("please Enter the last acknowledgements received:");
//                   scanf("%d",&ack);
//                   if(ack==windowsize)
//                   break;
//                   else
//                   sent=ack;

//             }
//             return 0;
//       }






//for practice
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//       int i,n,ack,windowsize,sent=0;
//       printf("Enter the windowsize\n:");
//       scanf("%d",&windowsize);
//       while(1)
//       {
//             for(i=0;i<windowsize;i++){
//             printf("Frame %d is transmitted\n",sent);
//             sent++;
//             if(sent==windowsize)
//             break;

//       }
//       printf("Please enter the last acknowledgement received:");
//       scanf("%d",&ack);
//       if(ack==windowsize)
//       break;
//       else;
//       sent=ack;
// }
// return 0;
// }







//for practice
#include<stdio.h>
#include<conio.h>
int main()
{
      int i,windowsize,sent=0,ack;
      printf("Enter the windowsize\n:");
      scanf("%d",&windowsize);
      while(1)
      {
            for(i=0;i<windowsize;i++){
            printf("Frame %d is transmitted\n",sent);
            sent++;
            if(sent==windowsize)
            break;
      }
      printf("Please enter the last acknowledgement received\n:");
      scanf("%d",&ack);
      if(ack==windowsize)
      break;
      else;
      sent=ack;
}
return 0;
}



// *  question no.1
// **
// ***
// ****
// *****

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     for(i=0;i<7;i++)
//     {
//         for(j=0;j<i-1;j++)
//         {
//          printf("*");
    
//         }
//          printf("\n");
//     }
//     return 0;
// }







    //    *
    //   **   question no.2
    //  ***
    // ****
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     int n=4;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(i+j>=n-1)
//             {
//                printf("*");
//             }
//             else{
//             printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }









// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     int n=5;
//     for(i=n;i>=1;--i)
//     {
//         for(j=1;j<=i;++j)
//         {
//             // if(i-j-1>=8-n)
//             // {
//             //    printf(" ");
//             // }
//             // else
//             {
//             printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }








// * * * * * 
// * * * * 
// * * *    question no4
// * * 
// * 
#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; i--) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
//C Program to Check Whether a Number is Prime or not




// #include <stdio.h> 

// int main() {
//   int n, i, c = 0;
//   printf("Enter any number n:");
//   scanf("%d", &n);

//   //logic
//   for (i = 1; i <= n; i++) {
//       if (n % i == 0) {
//          c++;
//       }
//   }

//   if (c == 2) {
//         printf("n is a Prime number");
//   }
//   else {
//          printf("n is not a Prime number");
//   }
//   return 0;    
// }

   


   //for practice
   #include<stdio.h>
   int main()
   {
    int i,n,c=0;
    printf("Enter numbers :n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      c++;

    }
    if(c==2)
    {
      printf("It is a prime no:");

    }
    else{
    printf("It is not a prime no.");
   }
   return 0;
   }
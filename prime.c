#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("\nEnter the number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            // break;
    printf("\n%d is not Prime Number\n",n);

        }
    }
    if(i>n/2)
    printf("\n%d is a Prime Number\n",n);
    return 0;

}
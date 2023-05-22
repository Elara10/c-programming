//C Program to Swap two Numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("\nEnter value of b");
    scanf("%d",&b);
   
    {
         int temp=a;
        a=b;
        b=temp;
    }
    printf("\nAfter swapping :a is:%d,y=%d",a,b);
    return 0;

}

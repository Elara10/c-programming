//C Program to Multiply two Floating Point Numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    float a, b,product=0.0f;
    printf("Enter any two floating point numbers a and b:\n");
    scanf("%f%f",&a,&b);
    product=a*b;
    printf("product of a and b is:%f",product);
    return 0;
}
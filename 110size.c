//C Program to Find the Size of int, float, double and char
#include<stdio.h>
#include<conio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of integer:%ld\n",sizeof(integerType));
    printf("size of float:%ld\n ",sizeof(floatType));
    printf("size of double:%ld\n",sizeof(doubleType));
    printf("size of char:%ld\n",sizeof(charType));
    return 0;
}
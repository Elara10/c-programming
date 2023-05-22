//C Program to Add Two Complex Numbers
#include<stdio.h>
#include<conio.h>
typedef struct complex 
{
    int real;
    int img;
}complex;
 complex add(complex n1,complex n2);
 int main(){
    complex n1,n2,result;
    printf("1st complex number\n");
    printf("enter  real  and  imaginary part:");
    scanf("%d %d ",&n1.real,&n1.img);
    printf("2nd complex number\n");
    printf("enter real  and imaginary part:");
    scanf("%d %d",&n2.real,&n2.img);
    result=add(n1,n2);
    printf("sum=%d+%di",result.real,result.img);
    return 0;

 }
 complex add(complex n1,complex n2)
 {
    complex temp;
    temp.real=n1.real+n2.real;
    temp.img=n1.img+n2.img;
    return (temp);
 }
  
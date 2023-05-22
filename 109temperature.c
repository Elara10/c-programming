//C Program To Convert Fahrenheit To Celsius

#include<stdio.h>
#include<conio.h>
int main()
{
    float farenheit,celsius;
    farenheit=62;
    celsius=((farenheit-32)*5)/9;
    printf("\n\nTemperature in celsius is:%f",celsius);
    return 0;
}
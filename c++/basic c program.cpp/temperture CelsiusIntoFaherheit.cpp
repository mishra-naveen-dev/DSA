#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter temperture in Celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("%.2f celsius = %.2f fahreheit",celsius,fahrenheit);
    return 0;
}

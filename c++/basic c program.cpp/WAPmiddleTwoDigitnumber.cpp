#include<stdio.h>
int main ()
{
    int n,a,b,sum;
    printf("Enter number to find the middle two days:");
    scanf("%d",&n);
    a=(n/100)%10;
    b=(n/10)%10;
    sum=a+b;
    printf("Sum of middle two digit=%d",sum);
    return 0;
}

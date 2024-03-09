#include<stdio.h>
#include<conio.h>
int main()
{
    int a,n,b,c,d,sum;
    printf("EnterTheFourDigitNumber:");
    scanf("%d",&n);
    a=(n/1000)%10;
    b=(n/100)%10;
    c=(n/10)%10;
    d=(n/1)%10;
    sum=a+b+c+d;
    printf("%d",sum);
    return 0;
}

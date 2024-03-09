#include<stdio.h>
int main ()
{
    int n,b,c,sum;
    printf("EnterTheFourDigitNumber:");
    scanf("%d",&n);
    b=(n/100)%10;
    c=(n/10)%10;
    sum=b+c;
    printf("%d",sum);
    return 0;
}

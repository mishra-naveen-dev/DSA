#include<stdio.h>
int main()
{
    int n,a,b,c,d,rev;
    printf("EnterTheFourDigitNumber:");
    scanf("%d",&n);
    a=(n/1000)%10;
    b=(n/100)%10;
    c=(n/10)%10;
    d=(n/1)%10;
    rev=d*1000+c*100+b*10+a;
    printf("%d",rev);
    return 0;
}

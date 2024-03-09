#include<stdio.h>

int main()
{
    int n,a,d,sum;
    printf("EnterTheNumber:");
    scanf("%d",&n);
    a=(n/1000)%10;
    d=(n/1)%10;
    sum=a+d;
    printf("%d",sum);
    return 0;
}

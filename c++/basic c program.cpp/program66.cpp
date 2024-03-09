#include<stdio.h>
int main ()
{
    int n;
    int a,b,c,d,e,rev;
    printf("EnterTheNumber:");
    scanf("%d",&n);
    a=(n/10000)%10;
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=(n/1)%10;
    rev=e*10000+d*1000+c*100+b*10+a;
    printf("\nThisIsReverseNumber=%d",rev);
    if(n==rev)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nNotEqual");
    }
    return 0;
}

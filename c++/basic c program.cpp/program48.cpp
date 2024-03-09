#include<stdio.h>
int main()
{
    int a,b,c;
    printf("EnterTheValueOf a:");
    scanf("%d",&a);
    printf("EnterTheValueOf b:");
    scanf("%d",&b);
    printf("EnterTheValueOf c:");
    scanf("%d",&c);
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    printf("AfterSwapping=%d\n%d\n%d",a,b,c);
    return 0;

}

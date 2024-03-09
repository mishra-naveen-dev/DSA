#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping ,First number =%d\n",a);
    printf("\nAfter Swapping second number =%d",b);
    return 0;
}

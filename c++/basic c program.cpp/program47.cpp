#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("EnterValueOf y:");
    scanf("%d",&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("AfterSwapping: x=%d,y=%d",x,y);
    return 0;
}

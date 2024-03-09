#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two angle of triangle:");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("Third angle of triangle is:%d",c);
    return 0;
}

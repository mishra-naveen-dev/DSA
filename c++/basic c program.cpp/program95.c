#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++);
    if(a<0)
        printf("Negative");
    else if(a>0)
        printf("Postivie");
    else
        printf("Zero");
}

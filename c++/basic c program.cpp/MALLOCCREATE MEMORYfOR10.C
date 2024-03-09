#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* p;
    int i;
    p= (int*)malloc(sizeof(int)*10);
    for(i=1;i<=10;i++)
    {
        printf("Enter the value of %u address:=",p);
        scanf("%d",p);
        p++;
    }
    p=p-10;
    for(i=1;i<=10;i++)
    {
        printf("\nvalue Of %u address =%d",p,*p);
    }
}

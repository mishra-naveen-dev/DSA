#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *p=(int*)malloc(sizeof(int)*10);
    for(i=1;i<=10;i++)
    {
        printf("Enter the value %u is address:",p);
        scanf("%d",p);
        p++;

    }
    p--;
    for(i=1;i<=10;i++)
    {
        printf("\n value of %u address =%d",p,*p);
        p--;
    }

}

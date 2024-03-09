#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *p=(int*)malloc(sizeof(int)*10);
    for(i=0;i<=10;i++)
    {
        printf("Enter the values %u address:",(p+i));
        scanf("%d",(p+i));

    }
    for(i=0;i<=10;i=i+2)
    {
        printf("\nValue of %u address =%d",(p+i),*(p+i));
    }

}

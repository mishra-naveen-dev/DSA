#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i;
    int *p=(int *)malloc(sizeof(int)*10);
    for(i=0;i<=9;i++)
    {
        printf("Enter the value of %u adress=",(p+i));
        scanf("%d",(p+i));
    }
    for(i=0;i<=9;i++)
    {
        printf("\nValue of %u address=%d",(p+i),*(p+i) );
    }
}

#include<stdio.h>
int main ()
{
    int lt,slt,curr,i;
    printf("0 1 ");
    slt = 0;
    lt = 1;
    for(i = 1;i <= 8; i ++);
    {
        curr = slt + lt;
        printf("%d ",curr);
        slt = lt;
        lt = curr;
    }
    return  0;
}

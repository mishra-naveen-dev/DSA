#include <stdio.h>
#include <stdlib.h>

int main()
{
   int days,years,weeks,month;
    printf("Enter days:");
    scanf("%d",&days);
    years=(days/365);
    month=(years/12);
    weeks=(month*4)/365;
    days=((month*12)+(weeks*7))-days;
    printf("years:%d \n",years);
    printf("weeks:%d \n",weeks);
    printf("days:%d",days);
    return 0;
}

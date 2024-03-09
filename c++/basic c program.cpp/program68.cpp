//program asss question 10
#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,a3;
    int total;
    printf("EnterTheAnglesOfTriangle:");
    scanf("%d%d%d",&a1,&a2,&a3);
    total=a1+a2+a3;
    printf("SumOfTotalIsEqual:%d",total);
    if(a1+a2+a3==180)
    {
        printf("\nValidTriangle");
    }
    else
    {
        printf("\nInvalidTriangle");
    }
    return 0;

}

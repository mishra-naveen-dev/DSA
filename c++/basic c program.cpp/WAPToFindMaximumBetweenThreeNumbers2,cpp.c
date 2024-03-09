#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter thtree numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num2))
    {
        max=num1;
    }
    else if((num2>num1)&&(num2>num3))
    {
        max=num2;
    }
    else if ((num3>num1)&&(num3>num2))
    {
        max=num3;
    }
    printf("maximum among all three number=%d",max);
    return 0;
}

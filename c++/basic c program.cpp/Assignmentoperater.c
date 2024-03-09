#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("EnterTheValues:");
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        printf("The num1 Is Less The num2");
        //printf("TheNum2IsGreaterThannum1");
    }
    else if (num1==num2)
    {
        printf("Both Number Are Equal");
    }
    //else if(num1>num2)
    else
    {
        printf("The num1 Is Greater Than num2");
        //printf("Thenum2lessThannum1");
    }
    return 0;
}

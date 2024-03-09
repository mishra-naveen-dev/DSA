#include<stdio.h>
int fact(int n)
{
    if (n==0)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{

    int number,factorial;
    printf("Enter number:");
    scanf("%d",&number);
    factorial=fact(number);
    printf("factorial of %d is %d\n",number,factorial);

    return 0;
}


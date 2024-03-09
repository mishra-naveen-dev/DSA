#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
 int main()
{

    int num,factorial;
    printf("Enter number:");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial of %d is %d\n",num,factorial);
    return 0;
}

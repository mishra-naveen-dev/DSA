#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the num the want to print:=");
    scanf("%d",&num);
    for(i=1;i<=10;i = i + 2);
    {
        printf("%d\n",num*i);
    }
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()//array
{
    int a[5],i,sum=0;
    printf("\nEnter 5 diff values\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum=%d",sum);

    getch();
}

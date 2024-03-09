#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum;
    int mn,mx;
    printf("Enter the starting range or number:");
    scanf("%d",mn);
    printf("Enter the ending range of number:");
    scanf("%d",&mx);
    printf("The perfect number within the given range :");
    for(n=mn;n<=mx;n++)
       {
        i=1;
    sum=0;
    while (i<n)
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
        printf("%d ",n);
       }
       printf("\n");

}

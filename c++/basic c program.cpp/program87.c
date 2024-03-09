#include<stdio.h>
int main()
{
    int num,i,n;
    printf("EnterTheValueTocheck:");
    scanf("%d",&n);
    num =1;
    for(i=2; i<=n-1;i++)
    {
        if(n%i==0)
        {
            num++//num==0;
            break;
        }
    }
    if(num==1)
        printf("PRIME");
    else
        printf("NOT A PRIME");

         return 0;

}

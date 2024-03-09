#include<stdio.h>
int main()
{
    int n, i;
    float sum;
    printf("EnterAnyNumber:");
    scanf("%d",&n);
    sum=0.0;
    for(i = 1; i<=n; i+=1)

    {
        sum=sum+(1.0/i);

    }
    printf("%f",sum);
    return 0;
}

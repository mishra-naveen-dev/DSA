#include<stdio.h>
int main()
{
    int i,n;
    float sum;
    printf("Enter The Number:");
    scanf("%d",&n);
    sum=0.0;
    for(i=1;i<= n;i++)
    {
        if(i %2 != 0)
        sum =sum+(1.0/i);
      else
        sum=sum-(1.0/i);
    }
    printf("%f",sum);

}

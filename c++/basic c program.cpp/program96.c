#include<stdio.h>//question15
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int mini;
    if(a<b)mini=a;
    else
        mini=b;
    for(i=mini;i>=1;i--)
    if(a%i==0&& b % i ==0)
    {
        printf("HCF/GCF IS %d",i);
        break;
    }
}

#include<stdio.h>
int main()
{
    float principle,time,rate,SI;
    printf("EnterPrincipleAmount:");
    scanf("%f",&principle);
    printf("EnterTime:");
    scanf("%f",&time);
    printf("EnterRate:");
    scanf("%f",&rate);
    SI=(principle*time*rate)/100;
    printf("Simple Interset=%f",SI);
    return 0;
}

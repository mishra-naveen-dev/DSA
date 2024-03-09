#include<stdio.h>
#include<math.h>
int main()
{
    float principle,time,rate,SI;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter time:");
    scanf("%f",&rate);
    printf("Enter rate:");
    scanf("%f",&time);
    SI=(principle*time*rate)/100;
    printf("Simple Interset=%f",SI);
    return 0;
}

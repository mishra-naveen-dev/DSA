#include<stdio.h>
int main ()
{
    int a,b,c,d,e;
    float per;
    printf("EnterTheValues:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5.0;
    printf("%f\nTotalPercenatge:",per);
    return 0;
}

#include<stdio.h>
int main()
{
    float cm,meter,km;
    printf("EnterthelengthinCentimeter:");
    scanf("%f",&cm);
    meter=cm/100;
    km=cm/100000;
    printf("length in meter=%.2f m\n",meter);
    printf("Length in Kilometer=%.2f km",km);
    return 0;
}

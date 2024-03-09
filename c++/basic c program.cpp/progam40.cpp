#include<stdio.h>
#include<math.h>
int main()
{
    int unit;
    float amt,total_amt,sur_charge;
    printf("EnterTotalUnitsCousumed:");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amt=unit*0.50;
    }
    else if(unit<=150)
    {
        amt=25+((unit-50)*0.75);
    }
    else
    {
        amt=220+((unit-250)*1.50);
    }
    sur_charge=amt*0.20;
    total_amt=amt=sur_charge;
    printf("ElectricityBill=Rs%.2f",total_amt);
    return 0;
}

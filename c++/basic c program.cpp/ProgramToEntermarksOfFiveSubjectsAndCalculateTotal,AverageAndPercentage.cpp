#include<stdio.h>
int main()
{
    float eng,phy,chem,math,comp;
    float total,average,percentage;
    printf("Enter the marks of five subject:\n");
    scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);
    total=eng+phy+chem+math+comp;
    average=total/5.0;
    percentage=(total/500.0)*100;
    printf("Total marks=%.2f\n",total);
    printf("Average of total=%.2f\n",average);
    printf("Total perctage =%.2f\n",percentage);
    return 0;
}

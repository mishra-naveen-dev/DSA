#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter the base of the triangle :");
    scanf("%f",&base);
    printf("Enter the height of the triangle:");
    scanf("%f",&height);
    area=(base*height)/2;
    printf("Arera of Triangle:=%.2f sq unit",area);
    return 0;
}

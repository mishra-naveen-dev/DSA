#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;
    printf("Enter side of an equilteral triangle:");
    scanf("%f",&side);
    area=(sqrt(3)/4)*(side*side);
    printf("Area of Equilatera Triangle:%.2f sq units",area);
    return 0;
}

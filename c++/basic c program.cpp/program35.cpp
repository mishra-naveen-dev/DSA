#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter three sideOfTriangle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1==side2&&side2==side3)
    {
        printf("EquilateralTriangle");
    }
    else if (side1==side2||side1==side2||side2==side3)
    {
        printf("IsoscelesTriangle");
    }
    else
    {
        printf("ScalencTriangle");
    }
    return 0;
}

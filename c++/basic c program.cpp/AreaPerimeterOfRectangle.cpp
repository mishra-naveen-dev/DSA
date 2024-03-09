#include<stdio.h>
int main()
{

    double length,width;
    double area,perimeter;
    printf("Enter the Length of rectangle:");
    scanf("%lf",&length);
    printf("Enter the width of rectangle:");
            scanf("%lf",&width);
        area =length*width;
        perimeter=2*(length + width);
        printf("area of rectangle:%lf\n",area);
        printf("Perimeter of rectangle:%lf",perimeter);
                            return 0;





}

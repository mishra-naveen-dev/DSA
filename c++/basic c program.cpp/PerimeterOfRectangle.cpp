#include<stdio.h>
int main()
{
    float length,width,perimeter;
    printf("Enter the length of  to find rectangle perimeter:");
    scanf("%f",&length);
    printf("Enter the width  to find rectangle perimeter:");
        scanf("%f",&width);

    perimeter=2*(length+width);
    printf("Perimeter of Rectangle=%.2f units",perimeter);
return 0;
}

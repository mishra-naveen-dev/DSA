#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,imaginary;
    float discriminant;
    printf("Enter valuesOf a,b,c OfQuardraticEquation(aX*^2+bX+c):");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("TwoDistinctAndRealRootsExists:%.2f and%.2f",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("TwoEqualAndRealRootsExists:%.2f and %.2f",root1,root2);
    }
    else if(discriminant<0)
    {
        root1=root2=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("TwoDistinctComplexRootsExist:%.2f + i%.2f and %.2f-i%.2f");
    }
    return 0;
}

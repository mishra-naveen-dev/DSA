#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n;
    printf("EnterTheNumber");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Yes!NumberIsNegative");
    }
    else
    {
        printf("No!NumberIsPositive");
    }
    return 0;

}

#include<stdio.h>
int main ()
{
    int year;
    printf("EnterTheYear:");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
           {

                printf("Leap Year");
            }
            else
            {
                printf("Non Leap yaer");
            }
           }
            else
            {
                printf("Leap Year");
            }
        }

        else
        {
            printf("NOT a Leap Year");
        }

    return 0;
}

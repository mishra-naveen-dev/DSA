#include<stdio.h>
#include<math.h>
int main()
{
    const char* WEEKS[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int week;
    printf("Enter weeks number (1-7):");
    scanf("%d",&week);
    if(week > 0 && week < 8)
    {
        printf("%s",WEEKS[week-1]);
    }
    else
    {
        printf("Invalid input ! please enter week number between 1-7",week);
    }
    return 0;
}

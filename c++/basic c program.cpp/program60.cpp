#include<stdio.h>
int main()
{
    int number;
    printf("EnterTheNumber:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\nYes!ItIsEvenNumber");
    }
    else
    {
        printf("\nNo!ItIsOddNumber");
    }
    return 0;
}

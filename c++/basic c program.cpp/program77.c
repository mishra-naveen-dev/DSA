#include<stdio.h>
int main ()
{
    char c;
    int ascii;
    printf("EnterTheValue:");
    scanf("%c",&c);
    ascii =c;
    if(ascii>=65 && ascii<=90)
    {
        printf("Capital Letter");// question 16
    }
    else if (ascii>=95 && ascii<=122)
    {
        printf("Small Case Letter");
    }
    else if (ascii>=48  && ascii<=57)
    {
        printf("Digit");
    }
    else
    {
        printf("Specifcal Charater");
    }
    return 0;
}

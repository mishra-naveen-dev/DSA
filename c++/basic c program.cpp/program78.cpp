#include<stdio.h>
int main()
{
    char c;
    printf("EnterAny Charter:");
    scanf("%c",&c);
    int ascii=c;
    (ascii>=48&& ascii<=57)&&( ascii>=65&&ascii<=90)&&(ascii>=97 && ascii<=122)?
    printf("Lower case\n"):printf("Not a lower case\n");

    printf("Special Charater");
    return 0;

}

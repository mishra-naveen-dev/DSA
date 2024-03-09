#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    printf("Enter any charater:");
    scanf("%c",&ch);
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("Character is an Alphabet:");
    }
    else
    {
        printf("charcter is not Alphabet:");
    }
    return 0;
}

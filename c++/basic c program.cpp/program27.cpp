#include<stdio.h>
#include<ctype.h>
int main ()
{
    char ch;
    printf("Enter any charcter:");
    scanf("%c",&ch);
    if (isupper(ch))
    {
        printf("%c is uppercaseAlphabet:",ch);
    }
    else if (islower (ch))
    {
        printf("%c is lowercaseAlphabet:",ch);
    }
    else

        {
         printf("%c is  not an Alphabet:",ch);

        }
    return 0;
}

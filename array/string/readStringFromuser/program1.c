// c program to read string from user
#include <stdio.h>
int main()
{
    // declaring string
    char str[50];

    // reading string
    printf("Enter the string:");
    scanf("%s", str);

    // print string
    printf("This is the string which you have enter:");

    printf("%s", str);

    return 0;
}
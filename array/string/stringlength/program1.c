// c program to illustrate how to
// pass string to functions
#include <stdio.h>
void printStr(char str[])
{
    printf("String is : %s", str);
}
int main()
{
    // declare and initialize string
    char str[] = "Hello Developers";

    // print string by passing string
    //  to adifferent function
    printStr(str);
    return 0;
}

// output
// Hello Developers
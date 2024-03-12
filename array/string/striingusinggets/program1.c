// c program to illustrate
// fgets()
#include <stdio.h>
#define MAX 50
int main()
{
    char str[MAX];
    // MAX Size if 50 defined
    printf("Enter the string:");

    fgets(str, MAX, stdin);
    printf("String is :\n");

    // Displaying string using puts
    puts(str);

    return 0;
}

// inputs
// hello developers

// output
// String is :
// hello developers

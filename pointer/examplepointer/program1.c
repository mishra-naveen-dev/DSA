// c program to illustrate pointers
#include <stdio.h>

void geeks()
{
    int var = 10;

    // declare pointer variable
    int *ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of  a variavle to a pointer
    printf("Value at ptr= %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}

// driver program
int main()
{
    geeks();
    return 0;
}
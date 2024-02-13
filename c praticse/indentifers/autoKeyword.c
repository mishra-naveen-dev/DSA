// c program to demonstrate
// auto is keyword in c

#include <stdio.h>
int printvalue()
{
    auto int a = 10;
    printf("%d", a);
}
int main()
{
    printvalue();
    return 0;
}
#include "myfile.h"
#include <stdio.h>
void printValue()
{
    printf("Global varible:%d", x);
}
int main()
{
    printValue();
    return 0;
}
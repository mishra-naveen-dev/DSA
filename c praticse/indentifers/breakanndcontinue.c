// c program
//  break and contiune keyword

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        /* code */
        if (i == 2)
        {
            continue;
        }
        if (i == 6)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
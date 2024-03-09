#include <math.h>
#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number to check prime or not :\n ");
    scanf("%d", &N);
    int flag = 1;
    double sqroot = sqrt(N);

    // Iterate from 2 to sqrt(n)
    for (int i = 2; i <= sqroot; i++)
    {
        /* code */
        // if n is divisble by any number between 2 and
        // sqrt(n),it is not prime
        if (N % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("%d is a prime number", N);
    }
    else
    {
        printf("%d is not a prime number ", N);
    }
    return 0;
}
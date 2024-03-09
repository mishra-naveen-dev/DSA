#include <stdio.h>

void checkPrime(int N)
{
    // initially, flag is set to true or 1
    int flag = 1;

    // loop to iterate through 2 to N/2
    for (int i = 2; i <= N / 2; i++)
    {
        // if N is perfectly divisible by i
        // flag is set to 0 i.e false
        if (N % i == 0)
        {
            printf("this the valve of i now %d inside \n ", i);
            printf("this the valve of N now %d inside \n ", N);
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("The number %d is a Prime Number\n", N);
        }
    else
    {
        printf("The number %d is not a prime Number\n", N);
    }
    return;
}

int main()
{
    int N;

    printf("Enter any num to checkwhether it is prime or not:\n");
    scanf("%d", &N);
    checkPrime(N);
    return 0;
}

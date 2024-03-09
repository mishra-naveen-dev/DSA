#include <stdio.h>
int main()
{
    // declaring an integer arrau
    int arr[5];

    // taking input to array elements one by one
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the elements:");
        scanf("%d", &arr[i]);
    }

    // printing array elements
    for (int i = 0; i < 5; i++)
    {
        printf(" The elements are :%d\t\n", arr[i]);
    }
    return 0;
}
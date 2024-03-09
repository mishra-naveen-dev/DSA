#include <stdio.h>

// function to return max value
int getMax(int *arr, int size)
{
    int max = 0;
    // calcualting cumlative sum of all the array elements
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[10] = {135, 165, 1, 16, 511, 65, 654, 654, 169, 4};

    printf("Largest Number in the Array: %d",
           getMax(arr, 10));

    return 0;
}
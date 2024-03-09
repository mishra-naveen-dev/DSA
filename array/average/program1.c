#include <stdio.h>
float getAverage(float *arr, int size)
{
    int sum = 0;
    // calcualting cumlative sum of all the array elements
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    // returning average
    return sum / size;
}
int main()
{
    // declaring and initializing array
    float arr[5] = {10, 20, 30, 40, 50};

    // size of array using sizeof operator
    int n = sizeof(arr) / sizeof(float);

    // printing array elements
    printf("Array Elements:");
    for (int i = 0; i < n; i++)
    {

        printf("%.0f\n", arr[i]);
    }
    // calling getAverage function and printing average
    printf("\nAverage:%.2f", getAverage(arr, n));
    return 0;
}
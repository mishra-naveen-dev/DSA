// minimum and maximum element

#include <iostream>
#include <limits>
#include <climits>
using namespace std;

// function to find the maximum element in an array
int findMax(int array[], int size)
{
    int max_element = INT_MIN; // initialize max_element to smallest possible value (INT_MIN= -2147483648)

    // loop through the array
    for (int i = 0; i < size; ++i)
    {
        if (array[i] > max_element)
        {
            max_element = array[i]; // update max_element is found
        }
    }
    return max_element; // returning maximum element
}

// function to find the minimum element  in an array
int findMin(int array[], int size)
{
    int min_element = INT_MAX; // initialize max_element to largest possible value (INT_MAX=2147483648)

    // loop through the array
    for (int i = 0; i < size; ++i)
    {
        if (array[i] < min_element)
        {
            min_element = array[i]; // update min_element is found
        }
    }
    return min_element; // returning minimum element
}

int main()
{
    int array[] = {5,
                   2,
                   8,
                   10,
                   3};
    int size = sizeof(array) / sizeof(array[0]); // calcualate the size the array

    // call the function and store the result
    int max = findMax(array, size);

    // output the maximum element
    cout << "Maximum elememt in the array is:" << max << endl;

    // call the findMin function and store the result

    int min = findMin(array, size);

    // output the minimum
    cout << "Minimum element in the array is:" << min << endl;

    return 0;
}
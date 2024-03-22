#include <iostream>
using namespace std;

// function to find the maximum element in array
int findMax(int array[], int size)
{
    int max_element = array[0]; // assume the first element is the maximum

    // loop through the array
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max_element)
        {

            max_element = array[i]; // if array of element graeter than max_element than update max_element
        }
    }
    return max_element; // return the maximum element
}

int main()
{
    int array[] = {5, 2, 8, 10, 3};
    int size = sizeof(array) / sizeof(array[0]); // calulate the size of the array

    // call the findMax function and store the result
    int max = findMax(array, size);

    cout << "Maximum element in the array is: " << max << endl;
    return 0;
}
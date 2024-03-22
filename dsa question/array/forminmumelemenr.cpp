#include <iostream>
using namespace std;

int findMin(int array[], int size)
{

    int min_element = array[0]; // assume the first element is the minimum

    // loop through the array
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min_element)
        {
            min_element = array[i]; // if array of element smaller than mixn_element than update min_element
        }
    }
    return min_element; // return the minimum element found
}

int main()
{
    int array[] = {5, 2, 8, 10, 3};
    int size = sizeof(array) / sizeof(array[0]); // calcualte the size of the array

    // call the findMin function and store the result
    int min = findMin(array, size);

    // output the minimum element

    cout << "Minimum element in the array is:" << min << endl;

    return 0;
}
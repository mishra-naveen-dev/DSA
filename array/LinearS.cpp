#include <iostream>
using namespace std;
int main()
{
    int arr[100], i, tot, num, index;
    cout << "Enter the Size for Array Size (0 to 100): ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nEnter a Number to Search: ";
    cin >> num;
    for (i = 0; i < tot; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }
    cout << "\nFound at Index No." << index;
    cout << endl;
    return 0;
}
// To search any element present inside the array in C++ programming using the linear search technique, you have to ask the user to enter any 10 numbers as 10 array elements, and then ask them to enter a number to search, as shown in the program given below.

This program doesn't allow the user to define the size of an array. Later on, you will go through the program that allows the user to define the size and also prints all the indexes of an element if it is found multiple times.

    This is the simplest program to implement linear search in C++.
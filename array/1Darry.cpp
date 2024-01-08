// To print a one-dimensional array in C++ programming, you have to ask the user to enter the size and elements of the array
#include <iostream>
using namespace std;
int main()
{
    int arr[50], size, i;
    cout << "Enter the Size:";
    cin >> size;
    cout << "Enter " << size << "Nubers:";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray with Index\tIts Value \n";
    for (i = 0; i < size; i++)
    {
        /* code */
        cout << "arr[" << i << "]"
             << "\t\t" << arr[i] << endl;
    }
    cout << endl;
    return 0;
}
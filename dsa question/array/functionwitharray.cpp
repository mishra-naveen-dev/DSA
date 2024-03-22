// function ke sath array call

#include <iostream>
using namespace std;
void printArrary(int arr[], int size)
{
    cout << "printing the array " << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing DONE" << endl;
}
int main()
{
    // declare
    int arr[15] = {2, 7};

    int n = 15;
    printArrary(arr, 15); // accessing function for call function

    // initializing all location with 0

    return 0;
}
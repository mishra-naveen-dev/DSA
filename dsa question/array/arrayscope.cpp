#include <iostream>
using namespace std;

// function
void update(int arr[], int n)
{
    cout << endl
         << "Inside the function " << endl;

    arr[0] = 14;
    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going to bak to main function" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);

    // printing the array
    cout << endl
         << "Printing in main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
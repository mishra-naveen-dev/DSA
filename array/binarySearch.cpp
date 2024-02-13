#include <iostream>
using namespace std;
int main()
{
    cout << "Here Naveen is the Programmer" << endl;
    int i, arr[100], num, first, last, middle, size;
    cout << "Enter size of elements:";
    cin >> size;
    cout << "Enter" << size << " Elemnts (in ascending order):\t\t";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter Elements to be Search:";
    cin >> num;
    first = 0;
    last = size - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < num) // this will sitch to left side of the array
        {
            first = middle + 1;
            /* code */
        }
        else if (arr[middle] == num) // this will switch to right side of the array
        {
            cout << "\nThe number," << num << " found at Position " << middle + 1;
            break;
        }
        else
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
    }
    if (first > last)
    {
        cout << "\nThe number," << num << " is not found is given Array";
        cout << endl;
    }

} // namespace name

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to rihgt side
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            // key<arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int findPeak(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 9, 11, 12, 15};

    int evenIndex = binarySearch(even, 6, 6);
    cout << "Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 9);
    cout << "Index of 14 is " << oddIndex << endl;

    int peakvalue = findPeak(even, 5);
    cout << "peak value of arr[6] is : " << peakvalue << endl;
    return 0;
}

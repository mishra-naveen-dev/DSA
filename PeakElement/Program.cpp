#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(int arr[], int nums)
    {
        int low = 0;
        int high = nums - 1;

        while (low < high)
        {
            int mid = (low + high) / 2;

            if (arr[mid] > arr[mid + 1])
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main()
{
    int nums;
    cout << "Enter the number of elements: ";
    cin >> nums;
    int arr[nums];
    cout << "Enter the elements:\n";
    for (int i = 0; i < nums; i++)
    {
        cin >> arr[i];
    }
    Solution solution;
    int peakIndex = solution.findPeakElement(arr, nums);

    cout << "The peak element is at index: " << peakIndex << endl;
    cout << "The peak element is: " << arr[peakIndex] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(int arr[], int n)
    {
        // your code
        sort(arr, arr + n);
        int minMissing = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 1)
                continue;
            else if (arr[i] == minMissing)
            {
                cout << arr[i] << " "
                     << "= " << minMissing << " ";
                cout << "\n";
                minMissing++;
            }
        }
        return minMissing;
    }
};

int missingNumber(int arr[], int n);
int main()
{
    int n;
    cout << "enter the array size:";
    cin >> n;
    int arr[n];

    // adding element to the array
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements:";
        cin >> arr[i];
    }
    Solution ob;
    cout << ob.missingNumber(arr, n) << endl;

    return 0;
}
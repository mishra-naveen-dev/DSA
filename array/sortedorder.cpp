// sorting the array in ascending order

// cpp program
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArr(vector<int> arr, int n)
    {
        // function code here
        sort(arr.begin(), arr.end());
        return arr;
    }
};
int main()
{
    int t;
    cout << "Enter the  how many time to use it :" << endl;

    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the Arr Sorting Capcity : " << endl;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            // cout << "here are sorted arr: " << endl;
            cin >> s[i];
        Solution ob;
        vector<int> v = ob.sortArr(s, n);
        for (auto i : v)

            cout << i << ' ';

        cout << endl;
    }
    return 0;
}

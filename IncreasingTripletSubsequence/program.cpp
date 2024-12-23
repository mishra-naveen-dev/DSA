#include <bits/stdc++.h>
using namespace std;

vector<int> find3Numbers(vector<int> &arr)
{
    int n = arr.size();

    vector<int> smaller(n, -1);
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[min])
        {
            min = i;
        }
        else
        {
            smaller[i] = min;
        }
    }

    vector<int> greater(n, -1);
    int max = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= arr[max])
        {
            max = i;
        }
        else
        {
            greater[i] = max;
        }
    }
    // find tripalte
    for (int i = 0; i < n; i++)
    {
        if (smaller[i] != -1 && greater[i] != -1)
        {
            return {arr[smaller[i]], arr[i], arr[greater[i]]};
        }
    }
    return {};
}
int main()
{
    vector<int> arr = {12, 11, 10, 5, 6, 2, 30};
    vector<int> res = find3Numbers(arr);
    for (int x : res)
        cout << x << " ";

    return 0;
}
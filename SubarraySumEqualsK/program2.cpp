#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findSubarraySum(vector<int> &arr, int k)
{
    unordered_map<int, int> prefixSums;
    int res = 0;
    int currSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];
        if (currSum == k)
        {
            res++;
        }
        if (prefixSums.find(currSum - k) != prefixSums.end())
        {
            res += prefixSums[currSum - k];
        }
        prefixSums[currSum]++;
    }
    return res;
}
int main()
{
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;

    cout << findSubarraySum(arr, k);
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicate(vector<int> &arr)
{
    vector<int> res;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                // check if the duplicate element is already in res a
                auto it = find(res.begin(), res.end(), arr[i]);
                if (it == res.end())
                {
                    // add the element to res if not already  present

                    res.push_back(arr[i]);
                }
                break;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {12, 11, 40, 12, 5, 6, 5, 12, 11};
    vector<int> duplicates = findDuplicate(arr);
    for (int i = 0; i < duplicates.size(); i++)
        cout << duplicates[i] << " ";

    return 0;
}
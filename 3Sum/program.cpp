#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;

    // check all possible triplates
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i + 1; j < n; j++)
        {
            /* code */
            for (int k = j + 1; k < n; k++)
            {
                /* code */
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {

            cout << i << " ";
        }

        cout << "]";
    }
    cout << "\n";
    return 0;
}
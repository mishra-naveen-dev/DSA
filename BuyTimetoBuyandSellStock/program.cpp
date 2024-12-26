#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, prices[j] - prices[i]);
        }
    }
    return res;
}

int main()
{
    vector<int> prices = {7, 1, 8, 3, 6};

    cout << maxProfit(prices) << endl;
    return 0;
}
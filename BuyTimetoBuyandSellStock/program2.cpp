#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minSoFar = prices[0];
    int res = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        minSoFar = min(minSoFar, prices[i]);
        res = max(res, prices[i] - minSoFar);
    }
    return res;
}
int main()
{
    vector<int> prices = {7, 1, 8, 3, 6};
    cout << maxProfit(prices) << endl;
    return 0;
}
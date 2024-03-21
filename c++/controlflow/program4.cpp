// cpp program to find the
// greater of three numbers
// using in built max()
#include <algorithm>
#include <iostream>
using namespace std;

// main code
int main()
{
    int a, b, c;
    a = 10, b = 20, c = 30;

    int ans;
    ans = max(a, max(b, c));
    cout << ans << " is the largest";

    return 0;
}
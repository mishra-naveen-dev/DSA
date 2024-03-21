// cpp progra to find largest among three numbers using
// temporary variable

#include <bits/stdc++.h>
using namespace std;

// code main
int main()
{
    int a = 1, b = 10, c = 4;

    // temporary varible where we assumend a is martix
    int max = a;
    if (max < b)
        max = b;

    if (max < c)
        max = c;

    printf("%d is the maximum out of %d ,%d and %d", max, a, b, c);

    return 0;
}
// cpp program to swap two
// numbers using swap()
// function
#include <bits/stdc++.h>
using namespace std;

// driver code

int main()
{
    int a = 5, b = 10;
    cout << "before swapping a=" << a << ",b=" << b << endl;

    // bulit in swap function
    swap(a, b);

    cout << "After swapping a= " << a << ",b=" << b << endl;
    return 0;
}
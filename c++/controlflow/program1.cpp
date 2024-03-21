// if the remainder is 0 print "even"
// if the remainder is print "odd"

// cpp program to check
// for even or odd
#include <iostream>
using namespace std;

// returns true if n is
//  even , else odd
bool isEven(int n) { return (n % 2 == 0); }

// code main func

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    if (isEven(n))
        cout << "Even";
    else
        cout << "odd";

    return 0;
}
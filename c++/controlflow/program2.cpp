// program to find largest among threee numbers

// psuedo code
// 1 start
// 2 input a,b and c
// 3 check the condition a>=b
//  4 if step 3 is tru got to step 5 else go to step9
//  5 check the condition a>=c
//  6 if step 5 is true go to step 8
//  7 print "The largest among 3" is a and go to step 13
//  8 print "the largest among 3 "is : c and go to step 13

// 9 check the condition b>=case
// 10 if step 9 is true go to step 11 else go to step 12
// 11 print print "the largest among 3" is b and go to step 13
// 12 print print "the largest among 3 " is c and go to step 13
// 13 stop

// cpp program to find largest among
// three numbers using  if-else
// statement
#include <bits/stdc++.h>
using namespace std;

// main code
int main()
{
    int a, b, c;
    cout << "Enter the three numbers a,b & c" << endl;
    cin >> a >> b >> c;

    if (a >= b)
    {
        // if 'a' is greater than or equal to 'b',compare
        //'a' with 'c'
        if (a >= c)
        {

            // if 'a' is also greater than or equal to 'c'
            // it is the largest number
            cout << "the largest among three number is :" << a << endl;
        }
        else
        {
            // if 'a' is not greater than or equal to 'c'
            //'c' must be the largest number
            cout << "The largest among three numbers is : " << c << endl;
        }
    }
    else
    {
        // if 'b' is  greater than 'a' compare 'b' with 'c'
        if (b >= c)
        {
            // if 'b' is also greater than or equal to 'c'
            // it is the largest number
            cout << "The Largest among three Number is :" << b << endl;
        }
        else
        {
            // if 'b' is not greater than or equal to 'c'
            //'c' must be the largest number
            cout << "The Largest among three Numbers is :" << c << endl;
        }
    }
    return 0;
}
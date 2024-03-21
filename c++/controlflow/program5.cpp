// if (year % 400 = 0)
//         return true (Leap year)
// else if (year % 100 = 0)
//         return false (Not a leap year)
// else if (year % 4 = 0)
//         return true (Leap year)
//  else
//         return false (Not a leap year)
// endif

// cpp program to check if a givern
// year is a leap year or not
#include <iostream>
using namespace std;

// function to check leap year
bool checkYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }

    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        return false;
    }
    // leap year if not divisible by 100
    //  but divisible by 4
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// main function
int main()
{
    int year;
    cout << "Enter any year to check where is it leap year or not :" << endl;
    cin >> year;

    checkYear(year)
        ? cout << "leap Year"
        : cout << "Not a leap Year";
    return 0;
}
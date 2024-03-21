// Amount=p(1+R/100)^T

// compound interest = amount-p

// p is principle amount
//  r is the rste
// tt time span
// psuedo code
// input principle amount.store it in some varible say principle
// input time in some varible say time.
// input rate in some varible say rate
// calcuate amount usingformula,
// amount=principle*(1+rate/100)^time.
// clacualte compound intereset using formula
// finally print the resultant value of ci

// cpp program to findcompound interset
// for given values
#include <bits/stdc++.h>
using namespace std;

// main
int main()
{
    double principal = 10000, rate = 5, time = 2;

    // calcualte compound interest
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;
    cout << "Compound interest is " << CI;
    return 0;
}
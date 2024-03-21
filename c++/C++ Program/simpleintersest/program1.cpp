// simple_interest = (p*t*r)/100

// cpp program to find simple interset
//  for given principle amount , time
// and rate of intereset

#include <iostream>
using namespace std;

// main function
int main()
{
    // we can changes values here for
    // different inputs
    float P = 1, R = 1, T = 1;

    // calculate simple interset
    float SI = (P * T * R) / 100;

    // print the resultant value of SI
    cout << "Simple Interest = " << SI;

    return 0;
}
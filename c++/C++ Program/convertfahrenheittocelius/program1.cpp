// T('c)=(T('F)-32)*5/9
// user se number liya n m store kiya
//(n-32.0)*5.0/9.0

// cpp program  to convert faherenheit
// scale to celsius
#include <bits/stdc++.h>
using namespace std;

// function to convert fahreheit
//  to celsius

float Conversion(float n)
{
    return (n - 30.0) * 5.0 / 9.0;
}

// main
int main()
{
    float n;
    cout << "Enter temperature n in fahrenheit scale convert it into Celsius sclae :" << endl;
    cin >> n;
    cout << Conversion(n);
    return 0;
}
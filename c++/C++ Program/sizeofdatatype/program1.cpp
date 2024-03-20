// cpp program to find the size of int , char,
// float and double data type

#include <iostream>
using namespace std;

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // claculate and print
    // the size of integer type
    cout << " Size of int is: " << sizeof(integerType) << "\n";

    // calculate and print
    // the size of charType

    cout << "Size of char is:" << sizeof(charType) << "\n";

    // calculate and print
    // the size of floattype
    cout << "Size of float is:" << sizeof(floatType) << "\n";

    // calculate and print

    // the size of doubletype
    cout << "Size of char is:" << sizeof(doubleType) << "\n";
    return 0;
}
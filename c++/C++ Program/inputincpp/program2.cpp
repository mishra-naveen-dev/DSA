// c program to demonstarte the taking
// multiple inputs from the user
#include <iostream>
using namespace std;

// driver code

int main()
{
    string name;
    int age;

    // Take multiple input using cin
    cout << "Enter the name and age of any person:" << endl;
    cin >> name >> age;

    // print output
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;

    return 0;
}
#include <iostream>
using namespace std;
int addFun(int, int);
int main()
{
    int num1, num2, add;
    cout << "Enter two Numbers:";
    cin >> num1 >> num2;
    add = addFun(num1, num2);
    cout << "\n Result = " << add;
    cout << endl;
    return 0;
}
int addFun(int a, int b)
{
    return (a + b);
}
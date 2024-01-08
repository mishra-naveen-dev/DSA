#include <iostream>
using namespace std;

class addTwoNum
{
private:
    int x, y;

public:
    void getData();
    int add();
};
void addTwoNum::getData()
{
    cout << "Enter Two Numbers:";
    cin >> x >> y;
}
int addTwoNum::add()
{
    return (x + y);
}
int main()
{
    addTwoNum c;
    int sum;
    c.getData();
    sum = c.add();
    cout << "\nResult=" << sum;
    cout << endl;
    return 0;
}
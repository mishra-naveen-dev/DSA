#include<iostream>
using namespace std;
 class Calculate
{
public:
    int n;
    void Sum()
    {
        cout<<"enter the number=";
        cin>>n;
        if(n%2==0)
        {
            cout<<"even number";

        }
        else
        {
            cout<<"odd number";
        }

    }
};
int main()
{
    Calculate my;
    my .Sum();
}

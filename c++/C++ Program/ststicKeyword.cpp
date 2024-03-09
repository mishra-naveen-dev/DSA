#include<iostream>
#include<string>
using namespace std;
class Base {
   public : static int val;
   static int func(int a) {
      cout << "Static member function called\n";
      cout << "The value of a : \n" << a;
   }
};
int Base::val=28;
int main() {
   Base b;
   Base::func(8);
   cout << "\nThe static variable value :\n" <<b.val;
   return 0;
}
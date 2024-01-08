// an array with its type set to char (character) to store characters.
#include <iostream>
using namespace std;
int main()
{
    char str[50];
    int i = 0;
    cout << "Enter First Your Name:";
    cin >> str;
    cout << "\nArray Index\t\tIts Value\n";
    while (str[i])
    {
        cout << "str[" << i << "]"
             << "\t\t" << str[i] << endl;
        i++;
    }
    cout << endl;
    return 0;
}

// output explan
// Enter First Your Name:naveen

// Array Index             Its Value
// str[0]                     n
// str[1]                     a
// str[2]                     v
// str[3]                     e
// str[4]                     e
// str[5]                     n
// cpp program for the coloring the
// background and text with
// different color
#include <iostream>

// header file to change color of
// text and background

#include <windows.h>
using namespace std;

// driver code
int main()
{

    // color of the console
    HANDLE console_color;
    console_color = GetStdHandle(
        STD_OUTPUT_HANDLE);

    // print different colors form 1
    //  to 50 on the output screen
    for (int P = 1; P < 40; P++)
    {

        // p is color code of the
        // corresponding color
        SetConsoleTextAttribute(
            console_color, P);

        // Print statement

        cout << P << " Hello Geeks, "
             << "good night!!!";
    }
    return 0;
}
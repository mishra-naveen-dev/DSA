#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        string rev;
        for (int i = str.size(); i >= 0; i--)
        {
            rev += str[i];
        }
        return rev;
    }
};
int main()
{
    int t;
    cout << "Enter the number of word (how many words to be reversed): " << endl;
    cin >> t;
    while (t--)
    {
        string s;
        cout << "Now Enter the Word/words: " << endl;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}
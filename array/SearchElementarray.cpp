// Search an Element in an array

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {

        // Your code here
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == X)
            {
                return i;
                continue;
            }
        }
        return -1;
    }
};
int main()
{
    // int testcases;
    // cout<<"Enter the "
    // cin>>testcases;
    // while(testcases--){
    int sizeOfArray;
    cout << "Size Of Array:";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    int x;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter the element:";
        cin >> arr[i];
    }
    cout << "Enter the element to search:";
    cin >> x;
    Solution ob;
    cout << ob.search(arr, sizeOfArray, x) << endl;
    //}
    return 0;
}
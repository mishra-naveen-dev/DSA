#include <iostream>
using namespace std;

class Solution
{
public:
    int majorityElement(int nums[], int n)
    {
        int cnt = 0;
        int ele = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
            {
                ele = nums[i];
            }
            if (ele == nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        return ele;
    }
};

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution solution;
    int majorityElement = solution.majorityElement(nums, n);
    cout << "The majaority element is: " << majorityElement << endl;
    return 0;
}
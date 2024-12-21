#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
   vector<vector<int>> merge(vector<vector<int>> &intervals)
   {
      sort(intervals.begin(), intervals.end());

      sort(intervals.begin(), intervals.end());

      vector<vector<int>> res;
      int start = intervals[0][0];
      int end = intervals[0][1];

      for (int i = 1; i < intervals.size(); i++)
      {
         if (intervals[i][0] <= end)
         {
            end = max(end, intervals[i][1]);
         }
         else
         {
            res.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
         }
      }
      res.push_back({start, end});
      return res;
   }
};

int main()
{
   int n;
   cout << "Enter the number of intervals: ";
   cin >> n;
   vector<vector<int>> intervals(n, vector<int>(2));
   cout << "Enter the intervals (start end):\n";
   for (int i = 0; i < n; i++)
   {
      cin >> intervals[i][0] >> intervals[i][1];
      // intervals[i] = Interval(start, end);
   }
   Solution solution;
   vector<vector<int>> mergedIntervals = solution.merge(intervals);

   cout << "Merged Intervals: \n";
   for (const auto &interval : mergedIntervals)
   {
      cout << "[" << interval[0] << ", " << intervals[1] << "] ";
   }
   cout << endl;
   return 0;
}
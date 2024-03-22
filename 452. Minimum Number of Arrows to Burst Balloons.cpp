class Solution
{
public:
  int findMinArrowShots(vector<vector<int>> &points)
  {
    sort(points.begin(), points.end());
    int ct = 0, i = 0, n = points.size();
    while (i < n)
    {
      int rightMost = points[i][1];
      while (i < n && points[i][0] <= rightMost)
      {
        rightMost = min(rightMost, points[i][1]);
        i++;
      }
      ct++;
    }
    return ct;
  }
};
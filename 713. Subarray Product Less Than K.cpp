class Solution
{
public:
  int numSubarrayProductLessThanK(vector<int> &nums, int k)
  {
    int ct = 0, temp = 1, start;
    vector<vector<int>> v;
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] < k)
      {
        temp = nums[i];
        // cout << nums[i];
        ct++;
        start = i + 1;
        while (start < nums.size() && temp * nums[start] < k)
        {
          temp *= nums[start];
          // cout <<" "<< nums[start] << " ";
          ct++;
          start++;
          // cout << temp << endl;
        }
      }
    }
    return ct;
  }
};
class Solution
{
public:
  int firstMissingPositive(vector<int> &nums)
  {
    vector<bool> v(nums.size() + 1, false);
    //    int m = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] > 0 && nums[i] <= nums.size())
        v[nums[i]] = true;
    }
    for (int i = 1; i <= nums.size(); i++)
    {
      if (!v[i])
        return i;
    }
    return nums.size() + 1;
  }
};
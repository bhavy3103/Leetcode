class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        int k = nums.size(), p;
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < k - 2; i++)
        {
            if (nums[i] < (nums[i + 1] + nums[i + 2]))
            {
                p = nums[i] + nums[i + 1] + nums[i + 2];
                return p;
            }
        }
        return 0;
    }
};
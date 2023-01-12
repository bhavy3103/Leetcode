class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int j = nums.size();
        int sum = 0;
        for (int i = 0; i < j; i++)
        {
            sum += nums[i];
        }
        int p = ((j) * (j + 1)) / 2;
        return p - sum;
    }
};
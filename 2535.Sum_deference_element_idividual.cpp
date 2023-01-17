class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum = 0, sum1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            while (nums[i] > 0)
            {
                int r = nums[i] % 10;
                sum1 += r;
                nums[i] /= 10;
            }
        }
        return abs(sum - sum1);
    }
};
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int p = INT_MIN;
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            k += nums[i];
            if (p < k)
                p = k;
            if (k < 0)
                k = 0;
        }
        return p;
    }
};
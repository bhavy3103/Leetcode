class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> fsubsets; // finalsubsets
        int l = nums.size();
        int p = 1 << l;
        for (int m = 0; m < p; m++)
        {
            vector<int> v;
            for (int i = 0; i < l; i++)
            {
                if ((m & (1 << i)) != 0)
                {
                    v.push_back(nums[i]);
                }
            }
            fsubsets.push_back(v);
        }
        return fsubsets;
    }
};
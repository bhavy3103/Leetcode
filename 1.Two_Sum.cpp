class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // int i=0;
        vector<int> v;
        int k = target;
        for (int i = 0; i < nums.size(); i++)
        {
            target -= nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
            target = k;
        }

        // else
        // {
        //     i++;
        //     // target -= nums[i];
        // }

        return v;
    }
};
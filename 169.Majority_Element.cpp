class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int maxcount = 0;
        int element_having_max_freq;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }

            if (count > maxcount)
            {
                maxcount = count;
                element_having_max_freq = nums[i];
            }
        }

        return element_having_max_freq;
    }
};
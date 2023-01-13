class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int l = nums.size();
        // int a[l];
        int j = 0;
        // sort(nums.begin(),nums.end());
        for (int i = 0; i < l; i++)
        {
            if (i < l - 1 && nums[i] == nums[i + 1])
            {
                continue;
            }
            nums[j] = nums[i];
            j++;
        }
        return j;
    }
};
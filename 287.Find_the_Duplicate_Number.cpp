class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int k;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto it : m)
        {
            if (it.second > 1)
                k = it.first;
        }
        return k;
    }
};
class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int k, m;
        k = *max_element(nums.begin(), nums.end());
        m = *min_element(nums.begin(), nums.end());
        return __gcd(k, m);
    }
};
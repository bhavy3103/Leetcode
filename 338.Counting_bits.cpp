class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        while (n >= 0)
        {
            int p = __builtin_popcount(n);
            v.push_back(p);
            n--;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
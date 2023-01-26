class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int p = x ^ y, ct = 0;
        for (int i = 0; i < 31; i++)
        {
            if (p & (1 << i))
                ct++;
        }
        return ct;
    }
};
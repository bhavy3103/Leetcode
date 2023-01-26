class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int p = min(a, b), ct = 0;
        for (int i = 1; i <= p; i++)
        {
            if (!(a % i) && !(b % i))
                ct++;
        }
        return ct;
    }
};
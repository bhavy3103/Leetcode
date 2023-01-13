class Solution
{
public:
    int climbStairs(int n)
    {
        int a[n + 1], p;
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else
        {
            a[0] = 1;
            a[1] = 1;
            for (int i = 2; i <= n; i++)
            {
                a[i] = a[i - 1] + a[i - 2];
                p = a[i];
            }
            return p;
        }
    }
};
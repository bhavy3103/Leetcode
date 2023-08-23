class Solution
{
public:
    double myPow(double x, int n)
    {
        double total = 1.0;
        bool f = false;
        if (n < 0)
        {
            f = true;
            n = abs(n);
        }
        while ((n) > 0)
        {
            if (n % 2)
            {
                total *= x;
                n /= 2;
            }
            else
            {
                n /= 2;
            }
            x = x * x;
            ;
        }
        if (f)
        {
            total = 1.0 / total;
        }
        // cout << total << endl;
        // cout << pow(2.00000,-2147483648);
        return total;
    }
};
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int ct = 0;
        if (n == 1 || n == 2)
            return true;
        else if (n % 2 != 0)
            return false;
        else
        {
            while (n > 0)
            {
                if (n % 2 == 0)
                {
                    n /= 2;
                    if (n == 1)
                    {
                        ct++;
                        break;
                    }
                }
                if (n % 2 != 0)
                {
                    ct = 0;
                    break;
                }
            }
            if (ct == 0)
                return false;
            else
                return true;
        }
    }
};
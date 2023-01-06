class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long int k, r, sum = 0;
        k = x;
        while (x > 0)
        {
            r = x % 10;
            sum = sum * 10 + r;
            x = x / 10;
        }
        if (sum == k)
            return true;
        else
            return false;
    }
};
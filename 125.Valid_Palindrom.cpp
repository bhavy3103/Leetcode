class Solution
{
public:
    bool isPalindrome(string s)
    {
        string p = "", k = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]) != 0)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] = s[i] - 'A' + 'a';
                }
                p += s[i];
            }
        }
        k = p;
        reverse(p.begin(), p.end());
        cout << p << " " << k << endl;
        if (k == p)
            return true;
        else
            return false;
    }
};
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        reverse(s.begin(), s.end());
        string p;
        int ct = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && ct == 0)
                continue;
            else if (s[i] == ' ' && ct != 0)
                return ct;
            else
            {
                p += s[i];
                ct++;
            }
        }
        return ct;
    }
};
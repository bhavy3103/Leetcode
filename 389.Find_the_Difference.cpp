class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char c;
        for (int i = 0; i < s.size(); i++)
        {
            if (t[i] != s[i])
            {
                c = t[i];
                return c;
            }
        }
        c = t[t.size() - 1];
        return c;
    }
};
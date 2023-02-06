class Solution
{
public:
    struct node
    {
        int index = -1;
    };

    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        unordered_map<char, struct node> m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[s[i]].index == -1)
            {
                m[s[i]].index = i;
            }
            else
            {
                ans = max(ans, (int)m.size());
                i = m[s[i]].index;
                m.clear();
            }
        }

        ans = max(ans, (int)m.size());
        return ans;
    }
};
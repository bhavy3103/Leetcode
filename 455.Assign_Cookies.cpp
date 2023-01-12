class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ct = 0, c = 0;
        for (int i = 0; i < g.size() && c < s.size();)
        {
            if (s[c] >= g[i])
            {
                i++;
                ct++;
            }
            c++;
            //     for(int j=0;j<s.size();j++)
            // {
            //     if(g[i]<=s[j])
            //     {

            //     ct++;
            //     break;
            //     }
            // }
        }

        return ct;
    }
};
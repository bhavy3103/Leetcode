class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> v;
        map<int, string, greater<int>> m;
        for (int i = 0; i < names.size(); i++)
        {
            int j = heights[i];
            string s = names[i];
            m.insert(make_pair(j, s));
        }
        for (auto it : m)
        {
            v.push_back(it.second);
        }
        return v;
    }
};
class Solution
{
public:
    string sortVowels(string s)
    {
        vector<char> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                // if(isvowel(s[i]))
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        int k = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                // if(isvowel(s[i])){
                s[i] = v[k];
                k++;
            }
        }
        return s;
    }
};
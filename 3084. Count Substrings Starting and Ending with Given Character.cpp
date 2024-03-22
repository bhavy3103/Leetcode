class Solution
{
public:
  long long countSubstrings(string s, char c)
  {
    long long ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == c)
        ct++;
    }
    return (ct) + (ct * (ct - 1)) / 2;
  }
};
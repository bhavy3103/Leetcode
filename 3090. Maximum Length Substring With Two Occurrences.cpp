class Solution
{
public:
  int maximumLengthSubstring(string s)
  {
    int left = 0, right = 0;
    int res = 0;
    unordered_map<char, int> f;

    while (right < s.size())
    {
      f[s[right]]++;

      while (f[s[right]] > 2)
      {
        f[s[left]]--;
        if (f[s[left]] == 0)
        {
          f.erase(s[left]);
        }
        left++;
      }

      res = max(res, right - left + 1);
      right++;
    }
    return res;
  }
};
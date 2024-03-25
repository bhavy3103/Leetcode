class Solution
{
public:
  vector<long long> mostFrequentIDs(vector<int> &nums, vector<int> &freq)
  {
    vector<long long> res(nums.size(), 0);
    unordered_map<int, long long> m;
    set<pair<long long, int>, greater<pair<long long, int>>> s;

    for (int i = 0; i < nums.size(); ++i)
    {
      auto it = s.find({m[nums[i]], nums[i]});
      if (it != s.end())
      {
        s.erase(it);
      }
      m[nums[i]] += freq[i];
      if (m[nums[i]] > 0)
      {
        s.insert({m[nums[i]], nums[i]});
      }
      if (!s.empty())
      {
        auto maxFreqPair = *s.begin();
        res[i] = maxFreqPair.first;
      }
    }

    return res;
  }
};
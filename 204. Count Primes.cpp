class Solution
{
public:
  int countPrimes(int n)
  {
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;

    if (n <= 2)
      return 0;

    for (int i = 2; i < sqrt(n); i++)
    {
      if (v[i] == true)
        for (int j = i * i; j < n; j += i)
        {
          v[j] = false;
        }
    }
    int ct = 0;
    for (int i = 2; i < n; i++)
    {
      if (v[i] == true)
        ct++;
    }
    return ct;
  }
};
class Solution
{
public:
  int minOperations(int k)
  {
    if (k == 1)
      return 0;

    int l = INT_MAX;
    for (int i = 1; i <= k / 2; i++)
    {
      int temp = ceil((double)k / i);
      int m = (i - 1) + (temp - 1);
      l = min(m, l);
    }

    return l;
  }
};
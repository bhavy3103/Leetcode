class Solution
{
public:
  int minimumBoxes(vector<int> &apple, vector<int> &capacity)
  {
    sort(apple.begin(), apple.end());
    sort(capacity.rbegin(), capacity.rend());

    int ct = 0;
    int ap = 0;

    for (int a : apple)
      ap += a;

    int i = 0;
    while (ap > 0)
    {
      if (i == capacity.size())
      {
        ct += (ap + capacity[i - 1] - 1) / capacity[i - 1];
        break;
      }
      if (apple.empty() || ap <= capacity[i])
      {
        ct++;
        break;
      }
      ap -= capacity[i++];
      ct++;
    }

    return ct;
  }
};
class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = 0; j < matrix[i].size(); j++)
      {
        if (matrix[i][j] == 0)
        {
          v1.push_back(i);
          v2.push_back(j);
        }
      }
    }
    for (int i = 0; i < v1.size(); i++)
    {
      for (int j = 0; j < matrix[0].size(); j++)
      {
        matrix[v1[i]][j] = 0;
      }
    }
    for (int i = 0; i < v2.size(); i++)
    {
      for (int j = 0; j < matrix.size(); j++)
      {
        matrix[j][v2[i]] = 0;
      }
    }
  }
};
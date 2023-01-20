class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0;
        int min = 1e6;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] <= min)
                min = prices[i];
            if (prices[i] - min >= max)
                max = prices[i] - min;
        }
        return max;
    }
};
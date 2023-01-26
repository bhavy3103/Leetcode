class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int p = 0, t, k = 1e7, m, n;
        vector<int> v;
        if (area == 1)
        {
            v.push_back(1);
            v.push_back(1);
        }
        else
        {
            for (int i = 1; i <= area / 2; i++)
            {
                if (area % i == 0)
                {
                    t = area / i;
                    p = abs(t - i);
                    // cout  << t << " " << p << endl;
                    if (p < k)
                    {
                        k = p;
                        ;
                        m = i;
                        n = t;
                    }
                }
            }
            v.push_back(n);
            v.push_back(m);
        }

        return v;
    }
};
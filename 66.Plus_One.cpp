class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        int id = digits.size() - 1;
        while (id >= 0)
        {
            if (digits[id] == 9)
            {
                digits[id] = 0;
            }
            else
            {
                digits[id] += 1;
                return digits;
            }
            id--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++)
        {
            bool flag = false;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                    flag = true;
                if (flag && nums1[i] < nums2[j])
                {
                    v.push_back(nums2[j]);
                    flag = false;
                    break;
                }
                // auto ptr = upper_bound(nums2.begin()+j+1,nums2.end(),j);
                // if(ptr==nums2.end())
                // v.push_back(-1);
                // else
                // v.push_back(*ptr);
            }
            if (flag)
                v.push_back(-1);
        }
        return v;
    }
};
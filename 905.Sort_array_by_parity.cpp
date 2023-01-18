class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> v;
        // int j=1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                v.push_back(nums[i]);
            //     else
            //     {
            //         v.insert(v.begin(),nums[i]);
            //     }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 != 0)
                v.push_back(nums[i]);
        }
        // int i=0,j=nums.size()-1;
        // int ,k=0;
        // while(p--)
        // {
        //     if(nums[k]%2==0)
        //     {
        //         v.push_back(nums[k]);
        //         k++;
        // i++,k++;
        //     }
        // else
        // {
        //     v[j]=nums[k];
        //     j--,k++;
        // }
        // }
        // k=0;
        // while(p--)
        // {
        //     if(nums[k]%2==1)
        //     {
        //         v.push_back(nums[k]);
        //         k++;
        //     }
        // }
        return v;
    }
};
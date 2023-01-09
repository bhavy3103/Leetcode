class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low, high, mid;
        low = 0;
        high = nums.size() - 1;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else if (nums[mid] > target)
                high = mid - 1;
            // else if(nums[mid]!=target && low<high)
            // return low;
            // else
            // return mid+1;
        }

        return low;
    }
};
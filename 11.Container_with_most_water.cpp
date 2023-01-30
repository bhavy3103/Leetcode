class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int area = 0;
        int l = 0, r = height.size() - 1;
        while (l < r)
        {
            int w = r - l;
            area = max(area, min(height[l], height[r]) * w);
            if (height[l] <= height[r])
                l++;
            else
                r--;
        }
        return area;
        // for(int i=0;i<height.size();i++)
        // {
        //     for(int j=i+1;j<height.size();j++)
        //     {
        //         int h=min(height[i],height[j]);
        //         int l=j-i;
        //         area=max(area,l*h);
        // if(h*l>area)
        // area=h*l;
        //     }
        // }
        // return area;
    }
};
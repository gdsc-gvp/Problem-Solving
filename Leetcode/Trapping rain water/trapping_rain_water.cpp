// Problem link - https://leetcode.com/problems/trapping-rain-water/

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int res = 0;
        int sz = height.size(), left = 0, right = sz - 1;
        int leftMax = 0, rightMax = 0;

        while (left <= right)
        {
            if (height[left] <= height[right])
            {
                if (leftMax < height[left])
                {
                    leftMax = height[left];
                }
                else
                {
                    res += leftMax - height[left];
                    ++left;
                }
            }
            else
            {
                if (height[right] > rightMax)
                {
                    rightMax = height[right];
                }
                else
                {
                    res += rightMax - height[right];
                    --right;
                }
            }
        }

        return res;
    }
};
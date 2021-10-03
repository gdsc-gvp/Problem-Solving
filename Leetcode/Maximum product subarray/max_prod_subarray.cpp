// Problem link - https://leetcode.com/problems/maximum-product-subarray/

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int globalMax = nums[0], minTmp = nums[0], maxTmp = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] < 0)
                swap(minTmp, maxTmp);
            maxTmp = max(maxTmp * nums[i], nums[i]);
            minTmp = min(minTmp * nums[i], nums[i]);
            globalMax = max(globalMax, maxTmp);
        }

        return globalMax;
    }
};

// Problem link - https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int sz;

    KthLargest(int k, vector<int> &nums)
    {
        sz = k;
        for (int i = 0; i < nums.size(); ++i)
        {
            add(nums[i]);
        }
    }

    int add(int val)
    {
        if (minHeap.size() < sz)
        {
            minHeap.push(val);
        }
        else
        {
            if (val > minHeap.top())
            {
                minHeap.pop();
                minHeap.push(val);
            }
        }
        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
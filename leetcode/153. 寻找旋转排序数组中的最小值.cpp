class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        //如果只有一个值
        if(n == 1)
        {
            return nums[0];
        }
        //如果第一个值小于最后一个值，说明已经排序好
        if(nums[low] < nums[high])
        {
            return nums[0];
        }
        //正常情况
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(high - low == 1)
            {
                return nums[high];
            }
            else if(nums[mid] >= nums[low])
            {
                low = mid;
            }
            else if(nums[mid] <= nums[high])
            {
                high = mid;
            }
        }
        
    }
};

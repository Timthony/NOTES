class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //二分查找该元素是否存在
        int low=0;
        int high = nums.size()-1;
        int mid;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return low;
        
        
        
        
        
    }
};


二分搜索

class Solution {
public:
    int search(vector<int>& nums, int target) {
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
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            
        }
        return -1;
        
        
        
        
        
        
        
        
    }
};


二分查找数组要有序
二分查找的实现
定义一个最低
一个最高
一个中间=（最低加最高）/2

每次都猜最中间的，比较和目标值的大小，
如果升序：
中间大于目标值，则目标值在小的一侧，high=mid-1;
中间小于目标值，则目标值在大的一侧，low=mid+1;
相等，则直接返回mid，就是target。

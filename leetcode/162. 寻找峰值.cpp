class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //循环所有的数,时间复杂度不符合O（n）
        // if(nums.size() == 1)
        // {
        //     return 0;
        // }
        // for(int i = 1;i<nums.size();i++)
        // {
        //     int j = i-1;
        //     int k = i+1;
        //     if(nums[i] > nums[j] && nums[i] > nums[k])
        //     {
        //         return i;
        //     }
        //     else if(i == nums.size()-1 && nums[i] > nums[j])
        //     {
        //         return i;
        //     }
        // }
        // return 0;
        //二分法查找是否有这样的元素，时间复杂度O（logN）
        
        int low = 0;
        int high = nums.size()-1;
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[mid+1])
            {
                high = mid;
            }
            else 
            {
                low = mid + 1;
            }
        }
        return low;

        
    }
};

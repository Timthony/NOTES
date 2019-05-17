class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low = 0;
        int high = 0;
        //进行遍历，如果i和j指向相同，那么i和j同时前进，否则i不变j前进
        int len = nums.size();
        if(len == 0)
        {
            return 0;
        }
        while(high < len)
        {
            if(nums[low] == nums[high])
            {
                high++;
            }
            else
            {
                low++;
                nums[low] = nums[high];
                high++;
            }
            
        }
        
        return low+1;
        
        
        
        
        
        
        
        
    }
};

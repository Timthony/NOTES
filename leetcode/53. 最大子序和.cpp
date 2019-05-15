class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //从头遍历，如果和为负数就抛弃，重新开始
        ////一次累加，如果累加后的值小于0，那么curnum的值扔掉之前的和，curnum = val;当前值
        int greatNum = INT_MIN;
        int curnum = 0;
        
        for(int i=0;i<nums.size();i++)
        {

            if(curnum > 0)
            {
                curnum = curnum + nums[i];
            }
            if(curnum <= 0)
            {
                curnum = nums[i];
            }
            
            if(curnum > greatNum)
            {
                greatNum = curnum;
            }
        }
        
        return greatNum;
        
        
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //遍历数组，让当前位置的数字作为下标将该下标的数字置为负数
        //最后有些数没变为负数，说明这些数的下标没有对应的数字，也就是缺的
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            nums[(abs(nums[i])-1)] = -abs(nums[abs(nums[i])-1]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                res.push_back(i+1);
            }
        }        
        return res;
    }
};





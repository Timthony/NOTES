class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n_size = nums.size() + 1;
        int sum = 0;
        for(int i = 0; i< nums.size();i++)
        {
            sum = sum + nums[i];
        }
        int n_sum = n_size*(n_size-1)/2;
        int res = n_sum - sum;
        return res;
        
        
        
        
        
 
    }
};

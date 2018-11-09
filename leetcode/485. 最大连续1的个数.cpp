class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                n++;
                if(n > max)
                {
                    max = n;
                }
            }
            else
            {
                n = 0;
            }
        }
        return max;
    }
};

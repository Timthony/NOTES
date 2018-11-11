class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res;
        //int temp;
        float size = float(nums.size())/2;
        float count = 0.0;//temp出现的次数
        //先排序
        sort(nums.begin(), nums.end());
        res = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == res)
            {
                count = count + 1.0;
            }
            else if(count > size)
            {
                //res = temp;
                //cout<<res<<endl;
                return res;
            }
            else
            {
                res = nums[i];
                count = 1;
            }
        }
        return res;
    }
};

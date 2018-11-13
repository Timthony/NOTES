class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> tmp;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if(!tmp.count(nums[i]))
            {
                tmp.insert(pair<int, int>(nums[i], 1));
            }
            else
            {
                tmp[nums[i]]++;
                if(tmp[nums[i]] == 2)
                {
                    res.push_back(nums[i]);
                }
            }

        }
        return res;

    }
};

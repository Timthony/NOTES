
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        map<int, int> tmp;
        for (int i = 0; i < n; i++)
        {
            if(tmp.count(nums[i]) < 1)
            {
                tmp.insert(pair<int,int>(nums[i], 1));
            }
            else
            {
                tmp[nums[i]]++;
            }
        }
        map<int, int>::iterator it;
        for (it = tmp.begin();it != tmp.end(); it++)
        {
            if(it->second > n/3)
            {
                res.push_back(it->first);
            }
        }
        return res;
    }
};
说明：    
使用map可以解决这个问题。    
map的定义map<int,int> tmp;    
map的插入操作：    
tmp.insert(pair<int,int>(2, 1));    
map的遍历    
map<int,int>::iterator it;    
for(it = tmp.begin();it!=tmp.end();it++)    
    it->first指的是当前的关键字    
		it->second指的是该关键字对应的具体内容    

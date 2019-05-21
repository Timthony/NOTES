class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> M;   //定义一个map保存键值和出现的次数
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            M[nums[i]]++;     //统计nums中每个值出现的次数
        }
        
        priority_queue<std::pair<int, int>> Q;  //定义一个优先级队列，保存出现次数以及对应的键值
        
        for(auto i=M.begin();i!=M.end();i++)
        {
            Q.push({i->second, i->first});   //遍历map，将键值对应的出现次数，和键值保存入优先队列
        }
        //此时Q中队头永远是最大值，每次取出最大的，输出对应的键值，再pop(),执行k次即可
        for(auto i=0;i<k;i++)
        {
            res.push_back(Q.top().second);
            Q.pop();
        }
        
        
        return res;

    }
};

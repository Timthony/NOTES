class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        //使用map哈希表来存储所有的可能
        map<string, int> map1;
        vector<string> res;
        
        if(s.size() < 10)
        {
            return res;
        }
        
        for(int i=0;i<=s.size()-10;i++)
        {
            string temp = s.substr(i, 10);
            if(map1.count(temp) >= 1)
            {
                map1[temp]++;
            }
            else
            {
                map1[temp] = 1;
            }
        }
 
        for(auto &it: map1)
        {
            if(it.second > 1)
            {
                res.push_back(it.first);
            }
        }
        
        
        
        return res;
        
        
        
        
        
    }
};

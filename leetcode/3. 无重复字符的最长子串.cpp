class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //使用滑动窗口，如果j指的元素已经存在，那么删除i，并且i++，j不变，继续判断此时j是不是还存在，存在就继续删除i直到不存在
        //当不存在时，j++，set加入新元素，记录当前存在的字符串长度。
        int i = 0;
        int j = 0;
        int res = 0;
        int len = s.size();
        set<char> cont;
        set<char>::iterator iter;
        
        while(i<len && j<len)
        {
            if( (iter=cont.find(s[j])) != cont.end() )
            {
                cont.erase(s[i++]);
            }
            else
            {
                cont.insert(s[j++]);
                res=max(res, j-i);
            }
            
                
        }
        
        return res;

        
    }
};

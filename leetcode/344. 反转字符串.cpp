class Solution {
public:
    string reverseString(string s) {
        int s_size = s.size();
        string res = s;
        for(int i=0;i<s_size;i++)
        {
            res[s_size-1-i] = s[i];
        }
        return res;          
        
    }
};

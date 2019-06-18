class Solution {
public:
    int firstUniqChar(string s) {
        int start = 0;
        int end = 0;
        int res = s.size();
        
        for(char ch='a';ch<='z';ch++)
        {
            start = s.find_first_of(ch);
            end = s.find_last_of(ch);
            if(start==end && start!=-1)
            {
                res = min(res, start);
            }
        }
        
        if(res == s.size())   res=-1;
        
        
        return res;
        
    }
};


在给出的字符串中查找26个英文字母第一次和最后一次出现的位置，如果两次位置相同则表明该字符没有重复。

需要注意的地方：
每次找到的字符位置不一定是该字符串中第一个不重复的字符，因此只有对26个字母都查找一边，
每次记录下字符出现的位置，最终取最小值，才能得到第一次不重复出现的字符位置。

int longestSubstringWithoutDuplication(const std::string& str)
{
    int curLength;//代表当前的最大长度
    int maxLength;//最后要返回的最大长度
    int *position = new int[26];   //定义一个数组保存了对应的字母上一次出现的位置
    for(int i=0;i<26;i++)
    {
        position[i] = -1;//初始化该数组对应的字母出现的位置为-1，代表没有出现过
    }
    //遍历字符串
    for(int i=0;i<str.length();i++)
    {
        int preIndex = position[str[i]-'a'];//当前的字符在第几位出现过，如果没出现过那么，preIndex=-1
        //如果当前的字符之前没有出现过，或者出现的位置距离现在的位置长度很远，已经包含了当前最长的字符串
        //那么，说明当前最长的字符串没有出现过当前的字符，当前最长的字符串长度加1
        if(preIndex < 0 || i-preIndex > curLength)
        {
            curLength++;
        }
        //否则，当前的字符在目前最长的字符串里边出现过，那么就不能再包含这个字符了，否则就重复了
        //此时，先把当前的最长字符串的长度保存一下，因为以后不一定有这么长的了
        //新的连续字符串的最大长度就变成了从当前字符上一次出现的位置的下一位开始，直到当前的字符，
        //长度为i(当前位置)-position[str[i]-'a']当前字符上一次出现的位置
        else
        {
            if(curLength>maxLength)
            {
                maxLength = curLength;
            }
            curLength = i-preIndex;
        }
        position[str[i]-'a'] = i;   //更新一下当前字符最新的出现位置，表示position里边的对应值在第几位出现过
    }
    //比较历史上保存的最大的maxlength和当前情况最长的字符串，取大的
    if(curLength > maxLength)
    {
        maxLength = curLength;
    }
    delete[] position;
    return maxLength;
}
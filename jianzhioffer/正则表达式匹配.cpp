class Solution {
public:
    bool match(char* str, char* pattern)
    {
        if(str == nullptr || pattern == nullptr)
        {
            return false;
        }
        return isMatch(str, pattern);
    }
    bool isMatch(char *str, char *pattern)
    {
        //第一种情况，str和pattern都为空，则匹配上了
        if(*str == '\0' && *pattern == '\0')
        {
            return true;
        }
        //如果str不为空，模式串为空，则返回false
        if(*str != '\0' && *pattern == '\0')
        {
            return false;
        }
        //如果模式串第二个字符为*,说明模式串的第一个字符可以没有，也可有任意多次
        //第二位为*的情况，分为第一位相等和第一位不相等
        if(*(pattern+1) == '*')
        {
            //如果第一位相等
            if(*pattern == *str || (*pattern=='.'&&*str != '\0'))
            {
                return isMatch(str+1, pattern+2) //模式串向后移动
                    || isMatch(str+1, pattern)   //模式串不变，继续检查目标串的下一位是不是还等于模式串的第一位，比如aabb和a*b*
                    || isMatch(str, pattern+2); //目标串不变，模式串向后移动两位，也就是假设*为0次，等于没有，忽略a*
            }
            //如果第一位不相等，那么直接忽略第一位和它的*号
            else
            {
                return isMatch(str, pattern+2);
            }
        }
        //第二个字符不为*,两种情况，第一位相等（如果第一位为 . 也表示相等），和第一位不相等
        if(*str == *pattern || (*pattern=='.' && *str!='\0'))
        {
            return isMatch(str+1, pattern+1);
        }
        //第二个字符不为*，并且第一位不相等
        return false;
    }

};
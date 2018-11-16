
class Solution {
public:
    bool detectCapitalUse(string word) {
        int len_str = word.size();
        int flag = 0;//定义大写字母的个数
        int flag_small=0;//定义小写字母的个数
        if(len_str == 0)
        {
            return false;
        }
        for (int i = 0; i < len_str; i++)
        {
            //全部大写
            if(isupper(word[i]))
            {
                flag++;
                if(flag == len_str)
                {
                    return true;
                }
            }
            else if(islower(word[i]))
            {
                flag_small++;
                //第一个大写，剩余全部小写
                if(isupper(word[0]) && flag_small == (len_str-1))
                {
                    return true;
                }
                //所有全部小写
                if(flag_small == len_str)
                {
                    return true;
                }
            }
        }
        return false;

    }
};

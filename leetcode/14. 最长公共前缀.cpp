class Solution {
public:
    //注意是最长的公共前缀，不是最长的公共字符串，是前缀
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)  return "";
        string temp = strs[0];
        for(int i=1;i<strs.size();i++)
        {
            //假如没有在第一位匹配到，那么就把当前的公共字符串，缩短一位，
            //继续比较，如果还匹配不上，那么继续缩短
            //最终缩短为空，那么没有公共
            //最终遍历完后，返回公共的
            while(strs[i].find(temp) != 0)
            {
                temp = temp.substr(0, temp.length()-1);//从第0位开始，长度为length()-1的字符串
                if(temp.empty())  return "";
            }
        }
        
        return temp;
        
        // //先找到最短的字符串
        // string ans = "";
        // if(strs.empty())  return ans;
        // string min = strs[0];
        // for(int i=0;i<strs.size();i++)
        // {
        //     if(strs[i].size() < min.size())
        //     {
        //         min = strs[i];
        //     }
        // }
        // for(int j=0;j<min.size();j++)
        // {
        //     for(int k =0;k<strs.size();k++)
        //     {
        //         if(min[j] != strs[k][j])
        //         {
        //             return ans;
        //         }
        //     }
        //     ans = ans + min[j];
        // }
        // return ans;
    }
};

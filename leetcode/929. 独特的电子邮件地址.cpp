class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int index_a;//标记在第几个之前是本地名称
        for(int i =0;i<emails.size();i++)
        {
            for (int j = 0; j < emails[i].size(); j++)
            {
                if(emails[i][j] == '@')
                {
                    index_a = j;
                    break;
                }

            }
            for (int k = 0; k < index_a; k++)
            {
                if(emails[i][k] == '.')
                {
                    //substr(0, 5)获得字符串s中从第0位开始的长度为5的字符串
                    emails[i] = emails[i].substr(0, k) + emails[i].substr(k+1, -1);
                    index_a--;
                    k--;
                }
                if(emails[i][k] == '+')
                {
                    emails[i] = emails[i].substr(0, k) + emails[i].substr(index_a, -1);
                    break;
                }

            }

        }
        set<string> res;
        for (int l = 0; l < emails.size(); l++)
        {
            res.insert(emails[l]);
        }
        return res.size();
        
        
      
    }
};

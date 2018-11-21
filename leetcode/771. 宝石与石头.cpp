class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num=0;
        for(int i = 0;i<J.size();i++)
        {  
            for(int j = 0;j<S.size();j++)
            {
                if(J[i] == S[j])
                {
                    num++;
                }      
            }

        }
        return num;
    }
};

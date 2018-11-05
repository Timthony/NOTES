class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows <= 0)
        {
            return res;
        }
        res.assign(numRows, vector<int>(1));
        for (int i = 0; i < numRows; i++)
        {
            res[i][0] = 1;
            if(i == 0) continue;
            for (int j = 1; j < i; j++)
            {
                res[i].push_back((res[i-1][j] + res[i-1][j-1]));
            }
            res[i].push_back(1);
        }
        return res;
    }
};

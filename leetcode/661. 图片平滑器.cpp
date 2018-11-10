class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int rows = M.size();
        int cols = M[0].size();
        vector<vector<int> > res(rows, vector<int>(cols, 0));//
        int r,c;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                //表示滤波器的大小
                int temp = 0, count = 0;
                for (int k = -1; k <= 1; k++)
                {
                    for (int l = -1; l <= 1; l++)
                    {
                        r = i + k;
                        c = j + l;
                        if(r >= 0 && r < rows && c >=0 && c < cols)
                        {
                           count++;
                           temp = temp + M[r][c];
                        }
                    }

                }
                res[i][j] = temp/count;
            }
        }
        return res;
    }
};

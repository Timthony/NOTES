class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if((nums.size() * nums[0].size()) != (r * c))
        {
            return nums;
        }
        vector<vector<int>> res(r, vector<int>(c, 0));
        int temp[10000];
        int m=0;
        int n=0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[0].size(); j++)
            {
                temp[n] = nums[i][j];
                n++;
            }
        }
        for (int k = 0; k < r; k++)
        {
            for (int g = 0; g < c; g++)
            {
                res[k][g] = temp[m];
                m++;
            }
        }
        return res;

    }
};

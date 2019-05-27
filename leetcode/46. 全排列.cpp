class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() == 0)  return res;
        res.push_back(vector<int>(1, nums[0]));
        
        for(int i=1;i<nums.size();i++)
        {
            vector<vector<int>> temp;
            //j表示插入的位置，i表示插入的数
            for(int j=0;j<=i;j++)
            {
                
                for(auto p:res)
                {
                    p.insert(p.begin()+j, nums[i]);
                    temp.push_back(p);
                }                
            }
            res = temp;

            
        }
        return res;
        
    }
};

另外一种方式，我们考虑，对于有 n - 1 个数的排列，在加入第 n 个数之前的排列方式为 (n - 1)! 种，
加入第 n 个数时，我们采用插空法，即如下图为已经有 3 个数的其中一个排列为 1, 2, 3，则再增加一个数 4 后，
该排列可以通过插空产生出 4 种不同的排列，对 3! 个排列均按如下方式插空，最终可以得到 4! 种排列。

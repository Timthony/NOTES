class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> out;
        sort(candidates.begin(), candidates.end());
        combinationSumDFS(candidates, target, 0, out, res);
        return res;
        
    }
    
    void combinationSumDFS(vector<int> &candidates, int target, int start, vector<int> &out, vector<vector<int>> &res)
    {
        if(target < 0)  return;
        else if(target == 0)  res.push_back(out);
        else{
            for(int i=start;i<candidates.size();i++)
            {
                out.push_back(candidates[i]);
                combinationSumDFS(candidates, target-candidates[i], i, out, res);
                out.pop_back();
            }
        }
        
        
    }
    
};

// 题目分析：本题采用递归较容易解答。首先，将数组内的元素由小到大排序，然后不断地进行试探，直到和为target。若当前和小于target，则继续往里面加元素；若当前和等于target，就可以将结果保留下来；若当前和已经大于target，那就可以排除掉这种情况，回溯到上一层，寻找其他可能的组合。本质上我觉得可以归纳为深度搜索。

// 例如，数组为[2,3,5]，target的值为8，answer保存一种可能的组合，result保存所有可能的组合情况，首先2<8，将2加入answer，此时target变成了6，之后的分析如下图所示。同时，为了避免结果的重复，我们规定若第一个选定的为candidates[i]，那么下一个元素只能选它自己或者在它之后的元素，不能选在它之前的，这样就可以避免重复。


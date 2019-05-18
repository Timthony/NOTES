class Solution {
public:
    int maxArea(vector<int>& height) {
        //能容纳的水有两个因变量，横轴和纵轴长度
        int res = 0;
        
        //1，暴力搜索，O（n2），找到最大值res；
        //2，容量由柱子最低的一遍决定，设置两个对撞指针，每次更新小的位置，这样才有几率比之前的res大
        int low = 0;
        int high = height.size()-1;
        
        
        while(low < high)
        {
            if(height[low] < height[high])
            {
                int mul = (high-low) * height[low];
                if(res < mul)
                {
                    res = mul;
                }
                low++;
            }
            
            else
            {
                int mul = (high-low) * height[high];
                if(res < mul)
                {
                    res = mul;
                }
                high--;
            }
        }
        return res;
        

        
    }
};

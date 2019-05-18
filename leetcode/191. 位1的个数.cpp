class Solution {
public:
    int hammingWeight(uint32_t n) {
        //n和n-1按位与操作，可以消除最后一个1，消除多少次，就可以统计出1的个数
        int res = 0;
        while(n > 0)
        {
            n = n&(n-1);
            res++;
        }
        return res;
        
        
        
    }
};

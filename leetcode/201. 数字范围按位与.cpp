class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int count = 0;
        while(n != m)
        {
            n>>=1;
            m>>=1;
            count++;
        }
        
        return (m<<count);
        
            
        
    }
};

首先，将 [ 26 , 30 ] 的范围数字用二进制表示出来：

11010　　11011　　11100　　11101　　11110

而输出 24 的二进制是 11000 。

可以发现，只要找到二进制的 左边公共部分 即可。

所以，可以每次向左移一位，比较 m 和 n 是否相同，不同再继续左移一位，直至相同，然后相同的数再左移对应位数即可。


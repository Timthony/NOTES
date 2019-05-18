class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 || n==2)
        {
            return true;
        }
        if(n<=0)
        {
            return false;
        }
        
        while(n/2 != 1 && n%2 == 0)
        {
            n = n / 2;
            if(n == 2)
            {
                return true;
            }
        }
        
        return false;
    }
};


        if(n&(n-1) == 0)
        {
            return true;
        }
        
        return false;
如果一个数是 2 的次方数的话，那么它的二进数必然是最高位为1，其它都为 0 ，那么如果此时我们减 1 的话，则最高位会降一位，
其余为 0 的位现在都为变为 1，那么我们把两数相与，就会得到 0。

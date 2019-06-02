class Solution {
public:
    int fib(int N) {
        if(N == 0)  return 0;
        if(N == 1)  return 1;
        
        int curnum = 0;
        int firstnum = 0;
        int twonum = 1;
        
        for(int i=2;i<=N;i++)
        {
            curnum = firstnum + twonum;
            firstnum = twonum;
            twonum = curnum;
        }
        
        
        return curnum;
    }
};

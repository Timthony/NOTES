class Solution {
public:
    double Power(double base, int exponent) {
        //double类型比较不能直接用==，则需要判断两个数的差是否在要求的误差范围
        //在的话就表示相等
        if(-0.0000001<(base-0.0)<0.0000001 && exponent<0)  
        {
            return 0.0;
        }
        int absExponent = exponent;
        if(exponent < 0)
        {
            absExponent = -exponent;
        }
        double result = getPower(base, absExponent);
        if(exponent < 0)
        {
           result = 1.0/result;
        }
        return result;
    }
    double  getPower(double base, int exponent)
    {
        if(exponent == 0)
        {
            return 1.0;
        }
        if(exponent == 1)
        {
            return base;
        }
        double result = getPower(base, exponent>>1);//递归调用
        result = result * result;
        if(exponent & 1 == 1)   //取余操作，与1进行与操作，如果为奇数则结果为1，偶数结果为0
        {
            result = result * base;
        }
        return result;
    }
};
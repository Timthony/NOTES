

// 请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。 
// 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。


class Solution {
public:
    bool isNumeric(char* string)
    {
        if(string == nullptr)
        {
            return false;
        }
        bool numeric = scanInteger(&string);

        //如果出现 . 那么接下来就是数字的小数部分
        if(*string == '.')
        {
            ++string;
            //小数点前面可以没有数字，小数点后面可以没有数字，小数点前后可以都有数字，三种情况
            numeric = scanUnsignedInteger(&string) || numeric;
            //如果出现e或E，接下来就是指数部分
            if(*string == 'e' || *string == 'E')
            {
                ++string;

                numeric = numeric && scanInteger(&string);
            }
        }
        return numeric && *string=='\0';
    }
    //扫描无符号型的整数
    bool scanUnsignedInteger(char** string)
    {
        char* before = *string;
        while(**string != '\0' && **string>='0' && **string <='9')
        {
            ++(*string);
        }
        //当str中存在若干个0-9的数字时，返回true
        return *string > before;
    }
    //扫描可能带正负号的整数
    bool scanInteger(char** string)
    {
        if(**string == '+' || **string == '-')
        {
            ++(*string);
        }
        return scanUnsignedInteger(string);
    }

};
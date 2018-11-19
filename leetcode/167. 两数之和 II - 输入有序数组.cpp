设置两个指针，左指针和右指针，最左边是最小值，最右边是最大值，那么两个指针指向的数相加，对撞，    
和如果小于target，则左指针增加1，右指针不变    
和如果大于target，则右指针减小1，左指针不变    

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int index1 = 1;
        int index2 = numbers.size();
        
        while(index1 != index2)
        {
            if(numbers[index2 - 1] + numbers[index1 - 1] == target)
            {
                res.push_back(index1);
                res.push_back(index2);
                return res;
            }
            else if(numbers[index2 - 1] + numbers[index1 - 1] >= target)
            {
                index2--;
            }
            else
            {
                index1++;
            }
            
        }
        
        return res;
        
        
        
        
    }
};

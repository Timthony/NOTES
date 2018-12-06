class Solution {
public:
    bool isPerfectSquare(int num) {
        //判断比这个值小的数的平方有没有等于这个数的，有的话true
        //二分搜索
        long int low = 0;
        long int high = num;
        while(low <= high)
        {
            long int mid = low + (high-low)/2;
            long int t = mid*mid;
            if(t > num)
            {
                high = mid - 1;
            }
            else if(t < num)
            {
                low = mid + 1;
            }
            else
            {
                return true;
            }
        }
        return false;
  
    }
};

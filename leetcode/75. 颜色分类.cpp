class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        int i = 0;
        while(i <= end)
        {
            if(nums[i] == 0)
            {
                int temp = nums[i];
                nums[i] = nums[start];
                nums[start] = temp;
                start++;
                i++;
            }
            else if(nums[i] == 1)
            {
                i++;
            }
            else
            {
                int temp = nums[end];
                nums[end] = nums[i];
                nums[i] = temp;
                end--; 
            }
        }
    }
};


这种方法的时间复杂读为O(n)，只历遍元素一遍，空间复杂度为O(1)。

采用一个两个指针来控制，一个指向0的后一个元素，一个指向2的前一个元素。分别记为start和end。

一开始，start=0，指向第一个元素，end=nums.size()-1,指向最后一个元素。用 i 表示当前元素。

如果当前元素是0，那么就把它换到start的位置，同时start加1，即保证了start之前的元素全都为0。同时++i，处理下一个元素。

如果当前的元素是1，那么不做任何处理，++i，继续处理下一个元素；

如果当前元素是2，那么就把它和end位置的元素交换，同时end-1，这样就保证了end之后的元素都为2。此时，i不能加1，因为换回来的元素大小未知，还需要继续处理。

通过这样的处理，便可以得到排序好的数组。

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int max=0;
        int index;
        for(int i=0;i<A.size();i++)
        {
            if(A[i] > max)
            {
                max = A[i];
                index = i;
            }
            
        }
        return index;
        
        
        
        
        
        
    }
};

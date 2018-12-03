lass Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int low =0;
        int high = A.size()-1;
        int mid;
        
        while(low<=high)
        {
            mid = (low+high)/2;
            if(A[mid]>=A[mid-1] && A[mid]>=A[mid+1])
            {
                return mid;
            }
            else if(A[mid] < A[mid-1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            
        }
        return 0;
  
//         int max=0;
//         int index;
//         for(int i=0;i<A.size();i++)
//         {
//             if(A[i] > max)
//             {
//                 max = A[i];
//                 index = i;
//             }
            
//         }
//         return index;
        
        
        
        
        
        
    }
};

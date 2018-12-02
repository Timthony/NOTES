class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size() == 1)
        {
            return true;
        }
        if(A[A.size()-1] >= A[0])
        {
            for(int i=0;i<A.size()-1;i++)
            {
                if(A[i] > A[i+1])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            for(int i=0;i<A.size()-1;i++)
            {
                if(A[i] < A[i+1])
                {
                    return false;
                }
            }
            return true;
        }
        
        
    }
};

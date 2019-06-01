class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int i=0;//指向nums1
        int j=0;//指向nums2
        int k=0;//指向temp
        while(i<m && j<n)
        {
            if(nums1[i] <= nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < m)  
        {
            temp.push_back(nums1[i]);
            i++;
        }
        while(j < n)
        {
            temp.push_back(nums2[j]);
            j++;
        }
        
        nums1.assign(temp.begin(), temp.end());
        
        
        
    }
};

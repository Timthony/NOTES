class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> chong;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i]==nums2[j] && count(chong.begin(),chong.end(),nums1[i])==0)
                {
                    chong.push_back(nums2[j]);
                }
            }
        }
        return chong;
    }
};

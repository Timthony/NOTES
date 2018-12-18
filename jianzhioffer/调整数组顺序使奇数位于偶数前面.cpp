class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if(array.size() == 0)
        {
            return;
        }
        vector<int> res;
        for(int i=0;i<array.size();i++)
        {
            if((array[i]&0x1) == 1)
            {
                res.push_back(array[i]);
            }
        }
        for(int i=0;i<array.size();i++)
        {
            if((array[i]&0x1) == 0)
            {
                res.push_back(array[i]);
            }
        }
        
        array = res;
    }
};







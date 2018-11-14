class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.size();i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        
        
        //transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }
};

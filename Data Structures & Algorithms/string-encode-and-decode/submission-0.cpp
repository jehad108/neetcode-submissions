class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto i : strs)
        {
            for(auto j : i)
            {
                s.push_back(j);
            }
            s.push_back('\0');
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>st;
        string temp;
        for(auto i : s)
        {
            if(i == '\0')
            {
                st.push_back(temp);
                temp = "";
            }
            else 
            {
                temp.push_back(i);
            }    
        }
        return st;
    }
};

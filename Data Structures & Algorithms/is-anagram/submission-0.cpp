class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        transform(s.begin(),s.end(),s.begin(),::tolower); 
        transform(s.begin(),s.end(),s.begin(),::tolower);
        vector<int>count(26,0);
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int val : count)
        {
            if(val != 0 )
                return false;
        }
        return true;
    }
};

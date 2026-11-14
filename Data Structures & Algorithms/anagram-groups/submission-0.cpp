class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp;
        unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        for(auto s : strs)
        {
            temp = s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        for (auto& p : m)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>r;
        for(auto i :nums)
        {
            mp[i]++;
        }
        for(auto i : nums)
        { 
            int x = 1;
            for(auto [key,value] : mp)
            { 
                if(key == i)
                {
                    x *= pow(key,value-1);
                }
                else
                    x *= pow(key,value);
            }
            r.push_back(x);
        }
        return r;
    }
};

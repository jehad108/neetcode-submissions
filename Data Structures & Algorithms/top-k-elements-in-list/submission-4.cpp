class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>>v(nums.size()+1);
        vector<int>result;
        unordered_map<int,int>mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto [key,value] : mp)
        {
            v[value].push_back(key);
        }
        for(int i = nums.size(); i >= 1 && result.size() < k; i--)
        {
            for(auto i : v[i])
            {
                result.push_back(i);
                if(result.size() == k)
                    return result;
            }
        }
        return result;
    }
         
};

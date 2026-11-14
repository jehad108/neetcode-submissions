class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v(2001,0);
        vector<int>result;
        for(auto i : nums)
        {
            v[i+1000]++;
        }
        for(int i=k; i > 0 ; i--)
        {
            auto it = max_element(v.begin(),v.end());
            int a = it - v.begin();
            a -= 1000;
            result.push_back(a);
            *it = -1;
        }
        return result;
    }     
};

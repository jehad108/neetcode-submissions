class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v(61);
        vector<int>r;
        for(auto i :nums)
        {
            v[i+30]++;
        }
        for(auto i : nums)
        {
            int value=1; 
            for(int j= 0 ; j < v.size() ; j++)
            {
                int s = j-30;
                if(s == i)
                {
                    value *= pow(s,v[j]-1);
                }
                else
                    value *= pow(s,v[j]);
            }
            r.push_back(value);
        }
        return r;
    }
};

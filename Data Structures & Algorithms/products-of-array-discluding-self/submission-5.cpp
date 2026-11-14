class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<pair<int,int>>ps(nums.size());
       vector<int>r(nums.size());
       int mul =1;
       for(int i=0; i< nums.size();i++)
       {
        ps[i].first = mul;
        mul *= nums[i];
       }
       mul = 1;
       for(int i = nums.size()-1 ; i >= 0; i--)
       {
        ps[i].second = mul;
        mul *= nums[i];
       }
       for(int i=0; i< nums.size();i++)
       {
            r[i] = ps[i].first*ps[i].second;
       }
       return r;
    }
};

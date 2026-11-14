class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for (auto i : nums)
        {
            mp[i] = true;
        }
        int maxx = 0;
        for(int i=0; i < nums.size() && maxx < nums.size(); i++)
        {
            int num1=nums[i]+1,num2=nums[i],j=0;
            while(mp.contains(num1) && mp[num1])
            {
                j++;
                mp[num1] = false;
                num1++;
            }
            while(mp.contains(num2) && mp[num2])
            {
                j++;
                mp[num2] = false;
                num2--;
            }
            maxx = max(maxx,j);
        }
        return maxx;
    }
};

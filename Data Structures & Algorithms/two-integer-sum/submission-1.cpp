class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i < nums.size() ; i++ )
        {
            m[nums[i]].push_back(i);
        }
        for(int i=0;i < nums.size() ; i++)
        {
            if(m.find(target-nums[i]) != m.end())
                for(auto j : m[target-nums[i]])
                {
                    if(j != i)
                    {
                        return {i,j};
                    }
                }
        }
    }
};

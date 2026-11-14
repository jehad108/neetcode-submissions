class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(),v.end()); 
        int n = v.size()-1;
        vector<vector<int>>r;
        for(int i = 0; i < v.size()-2; i++)
        {
            if(i > 0 && v[i] == v[i-1])continue;
            int left = i+1;
            int right = n;
            int sum;
            while(left < right)
            {
                sum = v[left]+v[right]+v[i];
                if(sum > 0)
                {
                    right--;
                }
                else if(sum < 0)
                {
                    left++;
                }
                else
                {
                    r.push_back({v[i],v[left],v[right]});
                    left++;
                    while(v[left]==v[left-1] && left < right )
                    {
                        left++;
                    }
                    right--; 
                    while(v[right] == v[right+1] && left < right)
                    {
                        right--;
                    }
                }
            }
        }
        return r;
    }
};
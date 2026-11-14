class Solution {
public:
    int maxProfit(vector<int>& v) {
        int minn = v[0],maxx= -1;
        for(int i=0; i < v.size(); i++)
        {
            minn = min(minn,v[i]);
            maxx = max(maxx,v[i]-minn);
        }
        return maxx;
    }
};

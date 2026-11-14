class Solution {
public:
    int maxArea(vector<int>& v) {
        int left = 0;
        int right = v.size()-1;
        int area,maxArea=-1;
        while(left < right)
        {
            area = min(v[left],v[right])*(right-left);
            maxArea = max(area,maxArea);
            if(v[left] <= v[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
};

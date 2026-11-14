static const auto hax = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return nullptr;
}();
class Solution {
public:
    int maxArea(vector<int>& v) {
        int left = 0;
        int right = v.size()-1;
        int maxArea=-1;
        while(left < right)
        {
            maxArea = max(min(v[left],v[right])*(right-left),maxArea);
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

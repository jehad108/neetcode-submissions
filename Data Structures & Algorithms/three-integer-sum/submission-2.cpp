class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(), v.end());
        vector<vector<int>> r;
        int n = v.size();
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values for the first element
            if (i > 0 && v[i] == v[i - 1]) continue;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = v[i] + v[left] + v[right];
                if (sum > 0) {
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    r.push_back({v[i], v[left], v[right]});
                    left++;
                    right--;
                    // Skip duplicates for left and right pointers
                    while (left < right && v[left] == v[left - 1]) left++;
                    while (left < right && v[right] == v[right + 1]) right--;
                }
            }
        }
        return r;
    }
};
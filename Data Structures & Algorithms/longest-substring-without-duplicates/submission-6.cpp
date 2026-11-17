class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, maxx = 0;
        unordered_map<char, int> mc;

        for (int i = 0; i < s.size(); i++) {
            if (mc.contains(s[i]) && mc[s[i]] >= left) {
                left = mc[s[i]] + 1;
            }
            mc[s[i]] = i;
            maxx = max(maxx, i - left + 1);
        }
        return maxx;
    }
};
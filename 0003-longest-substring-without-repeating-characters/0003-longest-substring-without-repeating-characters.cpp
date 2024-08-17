class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);  
        int l = 0, r = 0, size = s.size();
        int maxlen = 0;

        while (r < size) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r;
            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};
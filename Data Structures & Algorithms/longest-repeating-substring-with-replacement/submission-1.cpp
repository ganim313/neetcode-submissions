class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int maxf = 0, res = 0;
        unordered_map<char, int> f;

        while (right < s.size()) {
            f[s[right]]++;
            maxf = max(maxf, f[s[right]]);

            while ((right - left + 1) - maxf > k) {
                f[s[left]]--;
                left++;
            }

            res = max(res, right - left + 1);
            right++;
        }

        return res;
    }
};
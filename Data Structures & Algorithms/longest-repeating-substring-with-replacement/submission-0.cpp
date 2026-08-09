class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int left = 0, maxLength = 0, maxFreq = 0;
        
        for (int right = 0; right < s.size(); ++right) {
            char rightChar = s[right];
            freq[rightChar]++;
            maxFreq = max(maxFreq, freq[rightChar]);
            
            if (right - left + 1 - maxFreq > k) {
                char leftChar = s[left];
                freq[leftChar]--;
                left++;
            }
            
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};

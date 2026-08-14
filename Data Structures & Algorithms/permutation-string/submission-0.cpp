class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        for(auto c : s1){
            cnt1[c-'a']++;
        }
        int n=s1.size();
        for(int i=0;i<n;i++){
            cnt2[s2[i]-'a']++;
        }
        for(int r=n;r<s2.size();r++){
            if (cnt1==cnt2){
                return true;
            }
            cnt2[s2[r-n]-'a']--;
            cnt2[s2[r]-'a']++;
        }
        return cnt1==cnt2;
    }
};

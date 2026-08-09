class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for(auto x : nums){
            a.insert(x);
        }
        return a.size()!=nums.size();        
    }
};
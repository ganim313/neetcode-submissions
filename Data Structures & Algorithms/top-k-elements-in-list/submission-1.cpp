class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto& pair : nums){
            mp[pair]++;
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.second > b.second;});
        vector<int> result;
        for (size_t i = 0; i < k && i < vec.size(); ++i) {
                result.push_back(vec[i].first);
        }

        return result;
    }
};

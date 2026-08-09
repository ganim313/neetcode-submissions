class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size()==0)
          return {{}};
        vector<vector<string>> result;
        unordered_map<string,int> mp;
        for(auto s : strs){
            string st = s;
            sort(st.begin(),st.end());

            if(mp.find(st)!=mp.end()){
                result[mp[st]].push_back(s);
            }
            else{
                result.push_back({s});
                mp[st]=result.size()-1;
            }

        }
        return result;
        
    }
};

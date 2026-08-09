class Solution {
public:

    string encode(vector<string>& strs) {

        string s="";
        for(auto st : strs){
            s+=to_string(st.size())+"#"+st;
        }
        return s;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> strs;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            strs.push_back(s.substr(j+1,length));
            i=j+length+1;
        }
        return strs;

    }
};

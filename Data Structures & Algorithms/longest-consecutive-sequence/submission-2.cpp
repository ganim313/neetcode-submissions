class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        set<int> s;
        for(auto a:nums){
            s.insert(a);
        }
        int count=1;int maxCount=0;
        int prev=*s.begin();
        for(auto a : s){
            if(a==*s.begin())
            continue;

            if (a==prev+1){
                count++;
            }
            else{
             maxCount=max(maxCount,count);
                count =1;
            }
            prev=a;

        }
             maxCount=max(maxCount,count);
        return maxCount;
        
    }
};

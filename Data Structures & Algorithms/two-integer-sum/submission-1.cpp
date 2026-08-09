class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int t=target-nums[i];
            auto it = mp.find(t);
            if(it!= mp.end()){
                return {it->second,i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
        
    }
};
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         sort(nums.begin(),nums.end());
//         int left=0,right=nums.size()-1;
//         while(left<right){
//             int sum=nums[left]+nums[right];
//             if(sum==target){
//                 return {left,right};
//             }
//             else if(sum<target) left++;
//             else if(sum>target) right--;
//         }
//         return {-1,-1};
//     }
// };

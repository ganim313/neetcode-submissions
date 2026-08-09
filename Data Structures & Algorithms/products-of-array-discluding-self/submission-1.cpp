class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        // vector<int> left(n, 1);
        // vector<int> right(n, 1);

        // for(int i=1;i<n;i++){
        //     left[i]=nums[i-1]*left[i-1];
        // }
        
        // for(int i=n-2;i>=0;i--){
        //     right[i]=nums[i+1]*right[i+1];
        // }

        // for(int i=0;i<n;i++){
        //     left[i]=left[i]*right[i];
        // }
        vector<int> result(n, 1);
        int leftProd=1;
        for(int i=0;i<n;i++){
            result[i]=leftProd;
            leftProd*=nums[i];
        }
        int rightProd=1;
        for(int i=n-1;i>=0;i--){
            result[i]*=rightProd;
            rightProd*=nums[i];
        }
        return result;

    }
};

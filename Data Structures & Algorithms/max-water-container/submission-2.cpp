class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0; 
        int left=0,right=heights.size()-1;
        while(left<right){
            int currArea=min(heights[left],heights[right])*(right-left);
            if(heights[left]<heights[right]){
                left++;
            }
            else {right--;}
            area=max(area,currArea);
            
        }
        return area;
    }
};

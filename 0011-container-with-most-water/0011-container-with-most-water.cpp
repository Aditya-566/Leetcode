class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        // stack<int> st;
        int maxcap=0;
        int right=n-1;
        while(left<right){
            int cap=min(height[left],height[right])*(right-left);
            maxcap=max(maxcap,cap);
            if(height[left]<height[right]){
                left++;
            }
            else{right--;}
            

        }
        return maxcap;
    }
};
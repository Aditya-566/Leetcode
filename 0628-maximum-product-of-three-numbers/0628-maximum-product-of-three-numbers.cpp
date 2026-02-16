class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans1=nums[n]*nums[n-1]*nums[n-2];
        int ans=nums[0]*nums[1]*nums[n];
        int ans2=max(ans1,ans);
        return ans2;
    }
};
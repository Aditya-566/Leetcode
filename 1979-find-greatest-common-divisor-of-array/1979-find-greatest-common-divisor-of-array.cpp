class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int mx = nums[nums.size()-1];
        while (mn >= 1) {
            if (mx % mn == 0 && nums[0] % mn == 0)
                return mn;
                else{
            mn--;}
        }
        return 1;
    }
};
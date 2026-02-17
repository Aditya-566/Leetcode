class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int left=0;
int sum=0;
        int right=nums.size()-1;
        while(left<right) {
            sum=nums[left]+nums[right];
            if(sum==k){
                return {left+1,right+1};
            }
            if(sum<k){
            left++;

            }
            else{
                right--;
            }
        }
        return {};
    }
};
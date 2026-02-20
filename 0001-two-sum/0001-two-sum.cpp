class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
       int n=nums.size();

       for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==k){
        return {i,j};
        }

       }
       
       } 
return {}; 
    }
};
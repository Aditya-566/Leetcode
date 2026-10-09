class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int count=0;
       int st=0;
       int j=n-1;
       while(st<j){
        if(nums[st]+nums[j]==k){
            count++;
            st++;j--;
        }
        else if(nums[st]+nums[j]<k){
                st++;
        }
        else if(nums[st]+nums[j]>k){
            j--;
        }
       }
    return count;
    }
};
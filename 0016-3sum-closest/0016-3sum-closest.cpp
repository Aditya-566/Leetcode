class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int n=nums.size();
         int closestsum=nums[0]+nums[1]+nums[2];
         int ans;
         sort(nums.begin(),nums.end());
         for(int i=0;i<n;i++){
             if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
           
            int sum=nums[i]+nums[j]+nums[k];
           if(abs(sum-target)<abs(closestsum-target)){
            closestsum=sum;
           }
           if(sum<target){
            j++;
           }
           else if(sum>target){
            k--;
           }
           else{
            return sum;
           }
        
        
         }}
         return closestsum;

    }
};
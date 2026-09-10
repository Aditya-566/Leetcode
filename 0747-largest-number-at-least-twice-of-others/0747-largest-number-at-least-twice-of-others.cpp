class Solution {
public:
int checkindex(vector<int> arr,int n){
   int index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==n){
            index=i;
        }
    }
    return index;
}
    int dominantIndex(vector<int>& nums) {
        vector<int> arr=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        if((2*(nums[n-1]))<=nums[n]){
            return checkindex(arr,nums[n]);
        }
        return -1;
    }
};
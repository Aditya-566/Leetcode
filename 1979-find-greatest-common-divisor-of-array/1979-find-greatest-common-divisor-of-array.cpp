class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int f=nums[0];
        while(f>1){
            if(nums[n-1]%f==0 && nums[0]%f==0){
                return f;
            }
            else{
                f--
                ;
            }
        }return 1;
    }
};
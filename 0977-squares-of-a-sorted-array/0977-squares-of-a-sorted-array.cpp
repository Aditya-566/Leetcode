class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<=n-1;i++){
       
        int ans=(nums[i]*nums[i] );
        res.push_back(ans);
        

        } sort(res.begin(),res.end());

        return res;
    }
};
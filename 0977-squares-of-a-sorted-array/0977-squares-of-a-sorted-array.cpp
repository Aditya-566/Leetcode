class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        int i=0;
        while(i<n){
        if(i==n){return {};}
        int ans=(nums[i]*nums[i] );
        res.push_back(ans);
        i++;

        } sort(res.begin(),res.end());

        return res;
    }
};
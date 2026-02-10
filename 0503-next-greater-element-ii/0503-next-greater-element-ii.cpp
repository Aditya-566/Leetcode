class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       stack<int> st;
       vector<int> res(nums.size(),-1);
       int n=nums.size();
       for(int i=2*n-1;i>=0;i--){
            while(!st.empty()&&nums[i%n]>=st.top()){
                st.pop();
            }if(!st.empty()){
                res[i%n]=st.top();
            }
            st.push(nums[i%n]);
       } return res;
    }
};
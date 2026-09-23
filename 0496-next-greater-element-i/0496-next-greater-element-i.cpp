class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans;
        // for(int i=0;i<nums1.size();i++){
        //     int j=0;
        //     while(j<nums2.size() && nums1[i]!=nums2[j]){
        //         j++;

        //     }
        //     int k=j+1;
        //     bool found=false;
        //     while(k<nums2.size()){
        //         if(nums2[k]>nums1[i]){
        //             ans.push_back(nums2[k]);
        //             found=true;
        //             break;
        //         }
        //         k++;
        //     }
        //     if(found==false){
        //         ans.push_back(-1);
        //     }
        // }
        // return ans;

        int n = nums2.size();
        vector<int> nge(n, -1);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if(!st.empty()) {
                nge[i] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }

        return ans;
    }
};
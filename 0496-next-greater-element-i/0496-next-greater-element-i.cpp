class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int j=0;
            while(j<nums2.size() && nums1[i]!=nums2[j]){
                j++;

            }
            int k=j+1;
            bool found=false;
            while(k<nums2.size()){
                if(nums2[k]>nums1[i]){
                    ans.push_back(nums2[k]);
                    found=true;
                    break;
                }
                k++;
            }
            if(found==false){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
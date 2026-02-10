// class Solution {
// public:
// int first(vector<int>& nums,int target){
//     int start=0,end=nums.size()-1;

//     int mid;
//     int first=-1;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(nums[mid]>=target){
//             if(nums[mid]==target){
//                 first=mid;
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//             return first;
//         }
//     }
// }
// int last(vector<int>& nums,int target){
//     int start=0,end=nums.size()-1;

//     int mid;
//     int last=-1;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(nums[mid]<=target){
//             if(nums[mid]==target){
//                 last=mid;
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//             return last;
//         }
//     }}
//     vector<int> searchRange(vector<int>& nums, int target) {
//     int first=this->first(nums,target);
//     int last=this->last(nums,target);
//     }
// };
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                startingPosition = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                endingPosition = i;
                break;
            }
        }
        return {startingPosition, endingPosition};
    }
};
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            int digit = nums[i];
            int digitc = 0;
            while(digit > 0) {
                digit /= 10;
                digitc++;
            }
            if(digitc % 2 == 0)
                count++;
        }
        return count;
    }
};
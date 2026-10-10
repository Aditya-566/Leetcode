
class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long lcm = nums[i];
            for (int j = i; j < n; j++) {
                if (k % nums[j] != 0) {
                    break;
                }

                lcm = (lcm / gcd(lcm, (long long)nums[j])) * nums[j];
                if (lcm == k) {
                    count++;
                }
                else if (lcm > k) {
                    break;
                }
            }
        }

        return count;
    }
};

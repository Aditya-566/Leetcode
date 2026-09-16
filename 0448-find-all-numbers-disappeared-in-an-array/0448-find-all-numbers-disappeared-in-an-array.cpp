class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        int n = nums.size();
        if (nums[0] != 1) {
            for (int i = 1; i < nums[0]; i++) {
                arr.push_back(i);
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1])
                continue;
            if (nums[i + 1] - nums[i] > 1) {
                for (int x = nums[i] + 1; x < nums[i + 1]; x++) {
                    arr.push_back(x);
                }
            }
        }
        if (nums[n - 1] != n) {
            for (int i = nums[n - 1] + 1; i <= n; i++) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};
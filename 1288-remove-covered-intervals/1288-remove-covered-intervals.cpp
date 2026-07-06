class Solution {
public:
    static bool comparator(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0])
            return a[1] > b[1];

        return a[0] < b[0];
    }

    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), comparator);

        int ans = 0;
        int maxEnd = 0;

        for (int i = 0; i < intervals.size(); i++) {
            if (intervals[i][1] > maxEnd) {
                ans++;
                maxEnd = intervals[i][1];
            }
        }

        return ans;
    }
};
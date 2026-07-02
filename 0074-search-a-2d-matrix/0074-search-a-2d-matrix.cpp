class Solution {
public:
    bool rowsrc(vector<int>& row, int target) {
        int low = 0;
        int high = row.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (row[mid] == target)
                return true;
            else if (row[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            if (target >= matrix[i][0] && target <= matrix[i][m - 1]) {
                if (rowsrc(matrix[i], target))
                    return true;
            }
        }
        return false;
    }
};
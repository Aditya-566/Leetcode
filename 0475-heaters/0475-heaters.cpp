class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        sort(heaters.begin(), heaters.end());

        int ans = 0;

        for(int house : houses) {

            int index = lower_bound(
                heaters.begin(),
                heaters.end(),
                house
            ) - heaters.begin();

            int distance;

            // No heater on right side
            if(index == heaters.size()) {
                distance = house - heaters[index - 1];
            }

            // No heater on left side
            else if(index == 0) {
                distance = heaters[index] - house;
            }

            // Heaters exist on both sides
            else {
                int left = house - heaters[index - 1];
                int right = heaters[index] - house;

                distance = min(left, right);
            }

            ans = max(ans, distance);
        }

        return ans;
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxsum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxsum=max(maxsum,sum);
        }
        return max(0,maxsum);
    }
};
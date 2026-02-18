class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int negcount=0;    
        int zerocount=0;
        for(int i=0;i<n;i++){       
            if(nums[i]<0){negcount++;}
            if(nums[i]==0){zerocount++;}
        }
        if(negcount%2==0 && zerocount==0){
            return 1;
        }
        if(negcount%2==1 && zerocount==0){
            return -1;
        }
        return 0;
  
    }
};
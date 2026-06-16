class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       string ans="";
       for(string word : words){
        int weight=0;
        for(char ch : word){
            weight+=weights[ch-'a'];
        }
        int mod=weight%26;
        char mapped='z'-mod;
       ans+=mapped;
       }
        return ans;
    }
   
    
};
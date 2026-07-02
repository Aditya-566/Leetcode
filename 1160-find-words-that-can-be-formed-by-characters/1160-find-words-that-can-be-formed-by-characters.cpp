class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26,0);
        for(char ch :chars){
            freq[ch-'a']++;
        }
        int ans=0;
        for (string word : words) {
        vector<int> temp = freq;
        bool possible = true;
        for (char ch : word) {
        temp[ch - 'a']--;
        if (temp[ch - 'a'] < 0) {
            possible = false;
            break;
        }
    }
    if (possible) {
        ans += word.size();
    }
}
        return ans ;
    }
};
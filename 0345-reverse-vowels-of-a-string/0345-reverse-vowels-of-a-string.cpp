class Solution {
public:
bool isvowel(char c){
    c=tolower(c);
    return c=='a' ||c=='o' ||c=='u'||c=='i'||c=='e';
}
    string reverseVowels(string s) {
        int n=s.size()-1;
        int left=0;
        int right=n;
        while(left<right){
            if(!isvowel(s[left])){
                left++;
            }
            else if(!isvowel(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
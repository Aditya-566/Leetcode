class Solution {
public:
    int strStr(string haystack, string needle) {
       int  n=haystack.length();
        int m=needle.length();
        if(n<m)return -1;
        for(int i=0;i<=n-m;i++){
            string subst=haystack.substr(i,m);
            if(subst==needle){
                return i;
            }
            
        
    }return -1;}
};
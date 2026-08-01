class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
            st.push(s[i]);}
            if(s[i]=='#'){
                if(!st.empty()){
                st.pop();}
            }
        }
        stack<char> sm;
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
            sm.push(t[i]);}
            if(t[i]=='#'){
                if(!sm.empty()){
                sm.pop();}
            }
        }return sm==st;
    }
};
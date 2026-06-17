class Solution {
public:
char processStr(string s,long long k){
long long len=0;
for(char ch:s){
if(isalpha(ch))
len++;
else if(ch=='*'){
if(len>0)
len--;
}
else if(ch=='#'){
len=min(len*2,(long long)1e15);
}
}
if(k>=len)
return '.';
for(int i=s.size()-1;i>=0;i--){
char ch=s[i];
if(isalpha(ch)){
if(k==len-1)
return ch;
len--;
}
else if(ch=='*'){
len++;
}

else if(ch=='#'){

len/=2;

if(k>=len)
k-=len;
}

else if(ch=='%'){
k=len-1-k;
}

}

return '.';
}
};
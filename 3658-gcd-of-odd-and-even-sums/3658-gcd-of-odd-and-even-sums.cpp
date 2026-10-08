class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int sumodd=n*n;
       int sumeven=n*(n+1) ;
    int m=min(sumodd,sumeven);
    int gcd=1;
    for(int i=1;i<m;i++){
        if(sumodd%i==0 && sumeven%i==0){
            gcd=max(gcd,i);
        }
    }
    return gcd;
    }
};
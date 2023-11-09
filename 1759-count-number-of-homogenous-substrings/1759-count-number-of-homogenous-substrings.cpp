class Solution {
public:
    int countHomogenous(string s) {
        long long sum=1;
        long long count =1;
        const long long mod = 1000000007;
        
        for(int i=0; i<s.length()-1; i++){
            if(s[i]==s[i+1]){
                count++;
                sum = (sum + count)%mod;
                
            }else{
                
                count =1;
                sum = (sum + count)%mod;
                
            }
            
        }
        
        return sum;
        
    }
};
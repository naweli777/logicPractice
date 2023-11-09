class Solution {
public:
    int countHomogenous(string s) {
        long long sum=0;
        long long count =1;
        const long long mod = 1000000007;
        
        for(int i=0; i<s.length()-1; i++){
            if(s[i]==s[i+1]){
                count++;
            }else{
                sum += (count * (count+1)/2%mod)%mod;
                count =1;
                
            }
            
        }
        sum = (sum + count * (count+1)/2%mod)%mod;
        return sum;
        
    }
};
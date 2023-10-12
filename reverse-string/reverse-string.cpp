class Solution {
public:
    
    void reverse(vector<char> & s, int i){
          int n = s.size();
        
      
        
        if(i>=n/2){
            return;
            
        }
            
            
            swap(s[i], s[n-i-1]);
            reverse(s, i+1);
        
        
        
    }
    void reverseString(vector<char>& s) {
        
        reverse(s,0);
     
    }
};
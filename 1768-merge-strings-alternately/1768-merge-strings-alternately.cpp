class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";
        int i=0;
        // int i = 0, j = 0;
        

        // while(i<m || j<n){
        //     if(i<m){
        //         result.push_back(word1[i++]);

        //     }
        //      if (j < n) {
        //         result.push_back(word2[j++]);
        //     }
        // }
        // return result;


        for(int i=0; i<max(m,n); i++){
            if(i<m){
                result.push_back(word1[i]);
            }
            if(i<n){
                result.push_back(word2[i]);
            }
        }
        return result;
    }
};
#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        
        // Start from the least significant digit and increment by one
        // for (int i = n - 1; i >= 0; i--) {
        //     if (digits[i] != 9) {
        //         digits[i]++;  // Increment the current digit
        //         return digits;  // Return the updated array
        //     } else {
        //         digits[i] = 0;  // Set the current digit to 0
        //     }
        // }
        
        // // If all digits were 9, we need to insert a new digit at the beginning
        // digits.insert(digits.begin(), 1);
        
        // return digits;


        for(int i=n-1; i>=0; i--){
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }else{
                digits[i] =0;
            }

        }
        digits.insert(digits.begin(),1);

        return digits;
    }
};

#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> pre(n, 1);
        std::vector<int> suff(n, 1);
        std::vector<int> ans(n, 0);
        
        // Calculate prefix products
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] * nums[i - 1];
        }
        
        // Calculate suffix products
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = suff[i + 1] * nums[i + 1];
        }
        
        // Calculate final result
        for (int i = 0; i < n; i++) {
            ans[i] = pre[i] * suff[i];
        }
        
        return ans;
    }
};

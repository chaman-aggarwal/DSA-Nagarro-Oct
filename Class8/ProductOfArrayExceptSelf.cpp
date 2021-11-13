https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> res;
        
        int product = 1;
        for(int i=0; i<n; i++)
        {
            product *= nums[i];
            res.push_back(product);
        }
        
        product = 1; // rightArray
        for(int i=n-1; i>=1; i--)
        {
            res[i] = res[i-1]*product;
            product *= nums[i]; 
        }
        res[0] = product;
        
        return res;
    }
};
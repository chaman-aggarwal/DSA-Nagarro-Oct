https://leetcode.com/problems/permutations/

class Solution { 
    
    void generatePermutations(vector<int>& nums, int i, vector<vector<int>>& res)
    {
        if(i==nums.size())
        {
            res.push_back(nums);
            return;
        }
        
        for(int j=i; j<nums.size(); j++)
        {
            swap(nums[i], nums[j]);
            generatePermutations(nums, i+1, res);
            // backtracking, to restore original array back
            swap(nums[i], nums[j]);
        }
        
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        generatePermutations(nums, 0, res);
        return res;
    }
};
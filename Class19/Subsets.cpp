https://leetcode.com/problems/subsets/

class Solution {  
    
    void generateSubsets(vector<int>& nums, vector<vector<int>>& res, vector<int>& path, int i)
    {
        if(i==nums.size())
        {
            res.push_back(path);
            return;
        }
        
        // include
        path.push_back(nums[i]);
        generateSubsets(nums, res, path, i+1);
        path.pop_back();
        
        // exclude
        generateSubsets(nums, res, path, i+1);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> path;
        
        generateSubsets(nums, res, path, 0);
        return res;
    }
};
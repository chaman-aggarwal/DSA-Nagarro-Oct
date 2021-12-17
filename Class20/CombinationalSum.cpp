class Solution {
    
    void allCombinations(vector<int>& candidates, int index, int target, vector<int>& path, vector<vector<int>>& res)
    {
        if(index==candidates.size())
        {
            return;
        }
        
        if(target==0)
        {
            res.push_back(path);
            return;
        }
        
        // include
        if(candidates[index]<=target)
        {
            path.push_back(candidates[index]);
            allCombinations(candidates, index, target-candidates[index], path, res);
            path.pop_back();
        }
        
        //exclude
        allCombinations(candidates, index+1, target, path, res);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> path;
        
        allCombinations(candidates, 0, target, path, res);
        
        return res;
    }
};
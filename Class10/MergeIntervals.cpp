https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        vector<vector<int>> result;
        
        sort(intervals.begin(), intervals.end());
        
        int s1 = intervals[0][0];
        int e1 = intervals[0][1];
        
        for(int i=1; i<n; i++)
        {
            int s2 = intervals[i][0];
            int e2 = intervals[i][1];
            
            if(s2 <= e1)
            {
                e1 = max(e1, e2);
            }
            else
            {
                result.push_back({s1,e1});
                s1 = s2;
                e1 = e2;
            }
        }
        
        result.push_back({s1,e1});
        return result;
    }
};